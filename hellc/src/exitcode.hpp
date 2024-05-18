#pragma once

enum ExitCode {
    Success,
    NoArgumentsProvided,
    FileNotFound,
    FileLoadError,

    // Lexer errors
    UnknownTokenError
};