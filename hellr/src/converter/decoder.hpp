#pragma once

#include <iostream>
#include <optional>
#include <vector>
#include <fstream>
#include <cstring>
#include <optional>
#include <tuple>
#include <bit>
#include <memory>

#include "../runtime/opcodes.hpp"
#include "../runtime/definitions.hpp"
#include "../exitcode.hpp"

// A human-readable "magic number" to help verify bytecode files
#define BYTECODE_MAGIC_NUMER "hell-runner"

class ByteDecoder
{
private:
    std::ifstream m_file;

    uint64_t combine_chars(const char data[8])
    {
        uint64_t target;
        memcpy(&target, data, sizeof(target));
        return target;
    }

    void get_instruction(byte_token &_ref);
    void get_field(FieldDefinition &_ref);
    void get_method(MethodDefinition &_ref);
    void get_struct(StructureDefinition &_ref);

public:
    ByteDecoder(std::string &file)
        : m_file(file, std::ios::binary)
    {
        // Verify the file is open
        if (!m_file.is_open())
        {
            std::cerr << "Error opening file: " << file << '\n';

            if (m_file.bad())
                std::cerr << "Fatal error: badbit is set.\n";

            if (m_file.fail())
                std::cerr << "Error details: " << strerror(errno) << '\n';

            g_exit(FileLoadError);
        }

        // Verify this is a hell binary file if it starts with "hell-runner"
        char file_magic[sizeof(BYTECODE_MAGIC_NUMER)];
        m_file.read(file_magic, sizeof(BYTECODE_MAGIC_NUMER) - 1);

        if (std::memcmp(file_magic, BYTECODE_MAGIC_NUMER, sizeof(BYTECODE_MAGIC_NUMER)))
        {
            // No magic number
            std::cerr << "Failed to find magic number.\nVerify if this is actually a hell bytecode file.\n";
            std::cout << "Found: '" << std::hex << file_magic << '\'';
            g_exit(MagicNumberMissing);
        }

        // Maybe add CRC to check for corruption?
    }

    /// @brief Parse the binary into tokens, and extract string constants
    /// @return
    void tokenize_binary(std::vector<std::wstring> &constants_buffer,
                         std::vector<byte_token> &bytecode_buffer);

    void parse_tokens() {}

    ~ByteDecoder() = default;
};

void ByteDecoder::tokenize_binary(std::vector<std::wstring> &constants_buffer,
                                  std::vector<byte_token> &bytecode_buffer)
{
    /*
     * Read Constants Table (strings)
     */

    // Get the number of UTF-16 strings are in the table
    char constant_count[sizeof(uint32_t)];
    m_file.read(constant_count, sizeof(uint32_t));
    uint32_t table_len = 0;

    for (int i = 0; i < sizeof(uint32_t); ++i)
        table_len |= static_cast<uint32_t>(constant_count[i]) << (i * 8);

    for (uint32_t i = 0; i < table_len; ++i)
    {
        std::cout << "Loading string " << i << '\n';
        // Get string length
        char char_count[sizeof(uint32_t)];
        m_file.read(char_count, sizeof(uint32_t));
        uint32_t string_len = 0;

        for (int i = 0; i < sizeof(uint32_t); ++i)
            string_len |= static_cast<uint32_t>(char_count[i]) << (i * 8);

        std::cout << "Str len: " << string_len << '\n';

        if (string_len == 0)
        {
            constants_buffer.push_back(L""); // Push empty string
            continue;
        }

        // Wide strings are two bytes, and the WString length is stored in the binary
        string_len *= 2;

        char string[string_len];
        m_file.read(string, string_len);
        constants_buffer.push_back(std::wstring(&string[0], &string[string_len]));
    }

    /*
     * Read Bytecode
     */

    while (!m_file.eof())
    {
        char byte;
        m_file.read(&byte, 1);
        OpCode code = verify_opcode(byte);

        switch (code)
        {
        case OpCode::DFFLD: // Define Field
        {
            byte_token token(get_field());
            token.opcode = OpCode::DFFLD;
            token.argument = {};

            bytecode_buffer.push_back(token);
        }

        case OpCode::DFFN: // Define Method
        {
            byte_token token(get_method());
            token.opcode = OpCode::DFFN;
            token.argument = {};

            bytecode_buffer.push_back(token);
        }

        case OpCode::DFSCT: // Define Structure
        {
            byte_token token(get_struct());
            token.opcode = OpCode::DFSCT;
            token.argument = {};

            bytecode_buffer.push_back(token);
        }

        default: // Normal instruction
        {
            byte_token token{};
            bytecode_buffer.push_back();
        }
        }
    }
}

void ByteDecoder::get_instruction(byte_token &__ref)
{
}

void ByteDecoder::get_field(FieldDefinition &__ref)
{
}

void ByteDecoder::get_method(MethodDefinition &__ref)
{
}

void ByteDecoder::get_struct(StructureDefinition &__ref)
{
}