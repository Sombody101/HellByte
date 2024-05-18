#include <iostream>
#include <vector>
#include <string_view>

#include "exitcode.hpp"
#include "allocator.hpp"
// #include "./runtime/program.hpp"
#include "./converter/decoder.hpp"

/*
 * Allowed file types:
 *      .hasm   HellScript assembly file    -> .hb file
 *      .hb     HellScript binary file      -> run
 */

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "No arguments provided\n";
        return NoArgumentsProvided;
    }
    std::cout << argv[0] << '\n';
    std::cout << argv[1] << '\n';
    std::string filepath = argv[1];
    if (filepath.ends_with(".hasm") || filepath.ends_with(".hil")) // HellAssembly or HellIntermediateLanguage
    {
        std::cerr << "The HASM to HB compiler has not been made yet.\n";
        g_exit(UnsupportedFeature);
    }
    else if (filepath.ends_with(".hb"))
    {
        ByteDecoder decoder(filepath);

        std::vector<std::wstring> constant_strings;
        std::vector<byte_token> bytecode;

        decoder.tokenize_binary(constant_strings, bytecode);

        for (auto t : constant_strings)
        {
            std::wcout << t << '\n';
        }

        for (int i = 0; i < bytecode.size(); ++i)
        {
            auto b = bytecode.at(i);
            std::cout << "0x" << std::hex << b.opcode << " : "
                      << opcode_str(b.opcode) << '\n';
        }

        g_exit(Success);
    }
    else
    {
        std::cerr << "Cannot infer what the type of the given file is.\n";
        std::cerr << "Either give the file the extension '.hasm' or '.hil' if it is a Hell assembly/il file.\n";
        return UnsupportedFeature;
    }

    return Success;
}