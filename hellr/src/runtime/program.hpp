#pragma once

/*
 * This file provides context for the bytecode program file that will be
 * loaded at runtime
 */

#include <iostream>
#include <vector>
#include <optional>
#include <string>
#include <fstream>
#include <iomanip>
#include <stack>

#include "./opcodes.hpp"
#include "../exitcode.hpp"
#include "../converter/decoder.hpp"

/*
 * Structures for stack layout
 */

struct LocalVariableInfo
{
    // Type information for the variable (optional)
    const std::string type;

    // Pointer to the actual variable data (can be on heap or stack)
    void *data;
};

struct FrameContext
{
    /// @brief The name of the context (or scope)
    std::string context_name;

    /// @brief The bytecode location where the PC will be set to once the context exits
    uint64_t return_location;

    /// @brief A context struct for variables defined on the stack
    std::stack<LocalVariableInfo> variables;

    void pop()
    {
        variables.pop();
    }

    void push(LocalVariableInfo &info)
    {
        variables.push(info);
    }
};

/// @brief Parses the bytecode tokens. (Can also be considered the Runtime)
class Parser
{
private:
    /// @brief Parsed tokens for bytecode
    std::vector<byte_token> tokens;

    /// @brief Types to replicate when creating instances (No data (unless constant) will be here)
    std::vector<StructureDefinition> registered_types;

    /// @brief Give context to function calls
    std::stack<FrameContext> frameStack;

    /// @brief Program Counter
    uint64_t PC;

public:
    Parser(std::vector<byte_token> _tokens)
        : tokens(_tokens),
          frameStack{}
    {
        frameStack.push(FrameContext{
            .context_name = "<global>", // The global scope (So a method doesn't have to be called to start defining variables)
            .return_location = 0,       // Default value
            .variables = {
                // Input arguments
            },
        });

        // Set Program Counter to zero
        PC = 0;
    }

    ~Parser() = default;

}; // parser