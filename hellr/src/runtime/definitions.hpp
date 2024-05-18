#pragma once

/*
 * Structures for member definitions
 */

/// @brief Acts like a type defintion (in that it's constant in memory), but is replicated per struct instance
typedef struct MethodDefinition
{
    const std::string &type_name;
    const std::string method_name;
    const std::vector<byte_token> body;
    const size_t method_size;
};

/// @brief An instance of an object (not a type definition)
typedef struct FieldDefinition
{
    const std::string &type_name;
    const std::string field_name;
    const size_t field_size;
};

/// @brief A type definition which will be copied when needed
typedef struct StructureDefinition
{
    const std::string &type_name;
    const size_t type_size;

    // Functions defined within the structure
    std::vector<MethodDefinition> defined_methods;

    // Fields defined within the structure (can be instances of other structures)
    std::vector<FieldDefinition> defined_fields;
};

typedef union Definition
{
    Definition(FieldDefinition fld) {}
    Definition(MethodDefinition mthd) {}
    Definition(StructureDefinition stct) {}

    ~Definition() {}

    FieldDefinition field_definition;
    MethodDefinition method_definition;
    StructureDefinition structure_definition;
};

/*
 * Tokenization containers
 */

enum token_type
{
    instruction, // A regular instruction
    method_definition,
    field_definition,
    structure_definition,
};

typedef struct byte_token
{
    /// @brief The instruction to be executed
    OpCode opcode;

    token_type tok_type;

    union
    {
        FieldDefinition field_definition;
        MethodDefinition method_definition;
        StructureDefinition structure_definition;
    } definition;

    /*
     * Arguments are laid out as:
     *      Function call   : 4 bytes [32 bit] (method handle), 2 bytes [16 bit] (argument count), [2 bytes remain]
     *      Constants:
     *          strings     : Array index for hard-coded string stored in an array (defined prior to bytecode)
     *          numbers     : 8 bytes (the actual constant value)
     *
     * Like DotNet CIL, there is no char. It's just a byte, simplifying base types further.
     * If char is required, it should be implemented in the language being compiled to HASM/HIL.
     */
    /// @brief The argument for an instruction (Only used with token_type::instruction)
    std::optional<uint64_t> argument;
};
