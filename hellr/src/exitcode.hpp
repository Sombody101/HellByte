#pragma once

enum ExitCode
{
    Success,
    NoArgumentsProvided,

    FileNotFound,
    FileLoadError,
    MagicNumberMissing,
    UnknownOpCode,

    MemoryAllocationError,
    MemoryDeallocationError,
    UnsupportedFeature,
};

// ? Graceful exit
void g_exit(ExitCode code)
{
    std::exit((int)code);
}

// ? Log an error and exit
void g_err(const char* err_str, int ex_code, ExitCode code)
{
    std::cerr << "Error " << ex_code << "\n\t" << err_str << std::endl;
    g_exit(code);
}