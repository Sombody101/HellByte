#include <iostream>
#include <fstream>
#include <sstream>
#include <optional>
#include <vector>

#include "./tokenizer.hpp"

void print_token(Token *tok) {
    std::cout << "TOK: " << (int)(tok->type) << ' ' << tok->value.value() << '\n';
}

int main(int argc, const char *argv[])
{
    if (argc != 2)
    {
        std::cout << "No arguments supplied.\n";
        return ExitCode::NoArgumentsProvided;
    }

    std::cout << "Loading: " << argv[1] << '\n';

    std::fstream input(argv[1], std::ios::in);
    std::stringstream content_stream;

    std::string content;
    content_stream << input.rdbuf();
    content = content_stream.str();
    input.close();

    Tokenizer tokenizer(std::move(content));
    std::vector<Token> tokens = tokenizer.tokenize();

    for (auto elm : tokens) {
        print_token(&elm);
    }

    return ExitCode::Success;
}