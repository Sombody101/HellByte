#pragma once

#include <map>

/*
 * Roughly based on the DotNet CIL instruction standard:
 *      https://en.wikipedia.org/wiki/List_of_CIL_instructions
 */
enum OpCode
{
    ERR_CODE, // OpCode not found

    NOP,   // No operation
    BREAK, // Break recursion

    LDARG, // Argument -> Stack
    LDLOC, // Local Variable -> Stack
    STLOC, // Stack -> Local Variable
    LDFLD, // Field -> Stack
    STFLD, // Stack -> Field

    LDNULL, // null -> Stack
    LDC_I4, // Constant<int> -> Stack
    LDC_I8, // Constant<long> -> Stack
    LDC_R4, // Constant<float> -> Stack
    LDC_R8, // Constant<double> -> Stack
    LDSTR,  // CNST Index -> Stack

    DUP, // Top Stack -> Top Stack
    POP, // Top Stack -> free()

    JMP,  // Jump to line
    CALL, // Call method
    RET,  // Return

    BR_S, // Branch short
    // Import the rest of the branch opcodes later...

    /*
     * Pointers are not allowed in HellScript, so pointer opcodes are removed
     */

    ADD,  // pop() + pop() -> Stack
    SUB,  // pop() - pop() -> Stack
    MULT, // pop() * pop() -> Stack
    DIV,  // pop() / pop() -> Stack
    // DIV_UNS
    REMDR, // pop() % pop() -> Stack
    // REMDR_UNS

    AND, // pop() & pop() -> Stack
    OR,  // pop() | pop() -> Stack
    XOR, // pop() ^ pop() -> Stack

    LSHFT, // pop() << pop() -> Stack
    RSHFT, // pop() >> pop() -> Stack

    NEG, // -(pop()) -> Stack
    NOT, // !(pop()) -> Stack

    // Integer type casts later...

    ALLOC_OBJ, // Allocate space on heap for object (class) instance
    FREE_OBJ,  // Deallocate space on heap for object

    // Type definitions
    // DFCLSS, // Define Class
    DFSCT, // Define a structure
    DFFN,  // Define function
    DFFLD, // Define field
};

// Define a map to store string representations of OpCodes (using the enum value as the key)
std::map<OpCode, std::string> opcode_strings = {
    {OpCode::ERR_CODE, "err.code"},
    {OpCode::NOP, "nop"},
    {OpCode::BREAK, "break"},
    {OpCode::LDARG, "ldarg"},
    {OpCode::LDLOC, "ldloc"},
    {OpCode::STLOC, "stloc"},
    {OpCode::LDNULL, "ldnull"},
    {OpCode::LDSTR, "ldstr"},
    {OpCode::LDC_I4, "ldc.i4"},
    {OpCode::LDC_I8, "ldc.i8"},
    {OpCode::LDC_R4, "ldc.r4"},
    {OpCode::LDC_R8, "ldc.r8"},
    {OpCode::DUP, "dup"},
    {OpCode::POP, "pop"},
    {OpCode::JMP, "jmp"},
    {OpCode::CALL, "call"},
    {OpCode::RET, "ret"},
    {OpCode::BR_S, "br.s"},
    // ... Add entries for remaining opcodes later ...
    {OpCode::ADD, "add"},
    {OpCode::SUB, "sub"},
    {OpCode::MULT, "mult"},
    {OpCode::DIV, "div"},
    // ... Add entries for remaining opcodes later ...
    {OpCode::ALLOC_OBJ, "alloc"},
    {OpCode::FREE_OBJ, "free"},
};
size_t opcode_strings_len = opcode_strings.size();

std::string opcode_str(OpCode code)
{
    for (auto c : opcode_strings)
    {
        if (c.first == code)
            return c.second;
    }

    return "err.code";
}

OpCode str_opcode(std::string &str)
{
    for (auto c : opcode_strings)
    {
        if (c.second == str)
            return c.first;
    }

    return OpCode::ERR_CODE;
}

OpCode verify_opcode(char byte)
{
    auto casted_byte = static_cast<OpCode>(byte);

    if (casted_byte >= OpCode::ERR_CODE && casted_byte <= OpCode::DFFN)
        return casted_byte;

    if (casted_byte == OpCode::ERR_CODE)
        std::cerr << "Encountered hard coded opcode [ERR_CODE -> 0x0].\nThis code is reserved by the compiler and cannot be used within a script.";
    else
        std::cerr << "Unknown opcode: 0x" << std::hex << (uint32_t)byte << '\n';
    g_exit(UnknownOpCode);
    return OpCode::ERR_CODE;
}

bool needs_args(OpCode code)
{
    switch (code)
    {
        // Argument manipulation
    case LDARG:
    case LDLOC:
    case STLOC:

        // FPNs
    case LDC_I4:
    case LDC_I8:
    case LDC_R4:
    case LDC_R8:

        // Label inputs
    case LDSTR:
    case JMP:
    case CALL:

        // Definitions
    // case DFCLSS:
    case DFSCT:
    case DFFN:
        return true;

    default:
        return false;
    }
}