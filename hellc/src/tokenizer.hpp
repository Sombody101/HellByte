#pragma once

#include "./exitcode.hpp"

enum class TokenType
{
    // Keywords
    use,
    import,
    _return,
    _while,
    _for,
    _if,

    // Constants
    int_lit,
    str_lit,
    semi,
    iden, // iden(tifier)
};

struct Token
{
    TokenType type;
    std::optional<std::string> value;
};

class Tokenizer
{
public:
    inline Tokenizer(std::string src)
        : m_src(std::move(src))
    {
        m_src_len = m_src.length();
    }

    inline std::vector<Token> tokenize();

private:
    [[nodiscard]]
    std::optional<char> peek(int len = 1) const
    {
        if (m_index + len >= m_src_len)
        {
            return {};
        }
        else
        {
            return m_src.at(m_index);
        }
    }

    char consume()
    {
        return m_src.at(m_index++);
    }

    const std::string m_src;
    size_t m_src_len;
    int m_index;
};

std::vector<Token> Tokenizer::tokenize()
{
    std::string buffer = {};
    std::vector<Token> tokens = {};

    while (peek().has_value())
    {
        std::cout << "Starting at: " << m_index << '\n';

        if (std::isalpha(peek().value()))
        {
            buffer.push_back(consume());
            while (peek().has_value() && std::isalnum(peek().value()))
                buffer.push_back(consume());

            if (buffer == "use")
            {
                tokens.push_back({.type = TokenType::use});
                buffer.clear();
                continue;
            }
            else if (buffer == "import")
            {
                tokens.push_back({.type = TokenType::import});
                buffer.clear();
                continue;
            }
            else if (buffer == "return")
            {
                tokens.push_back({.type = TokenType::_return});
                buffer.clear();
                continue;
            }
            else if (buffer == "while")
            {
                tokens.push_back({.type = TokenType::_while});
                buffer.clear();
                continue;
            }
            else if (buffer == "for")
            {
                tokens.push_back({.type = TokenType::_for});
                buffer.clear();
                continue;
            }
            else if (buffer == "if")
            {
                tokens.push_back({.type = TokenType::_if});
                buffer.clear();
                continue;
            }
            else
            {
                std::cerr << "Failed to parse token: " << buffer << '\n';
                exit(ExitCode::UnknownTokenError);
            }
        }

        // Ignore whitespaces
        if (std::isspace(peek().value()))
            consume();
    }

    return tokens;

    // char c = str.at(i);
    //// Get an identifier
    // if (std::isalpha(c))
    //{
    //     // Get first char
    //     buffer.push_back(c);
    //     ++i;
    //
    //    // Assemble word if there's more text after the first char
    //    while (std::isalnum(str.at(i)))
    //    {
    //        buffer.push_back(str.at(i));
    //        ++i;
    //    }
    //
    //    // Check if it's a keyword
    //    if (buffer == "return")
    //    {
    //        tokens.push_back({.type = TokenType::_return});
    //        buffer.clear();
    //        continue;
    //    }
    //    else if (buffer == "while")
    //    {
    //        tokens.push_back({.type = TokenType::_while});
    //        buffer.clear();
    //        continue;
    //    }
    //    else if (buffer == "for")
    //    {
    //        tokens.push_back({.type = TokenType::_for});
    //        buffer.clear();
    //        continue;
    //    }
    //    else if (buffer == "if")
    //    {
    //        tokens.push_back({.type = TokenType::_if});
    //        buffer.clear();
    //        continue;
    //    }
    //    else
    //    {
    //        std::cerr << "Failed to parse token: " << buffer;
    //    }
    //}
    //// Get a constant number
    // else if (std::isdigit(c))
    //{
    //     // Get the first digit
    //     buffer.push_back(c);
    //     ++i;
    //
    //    // Get the rest of the number
    //    while (std::isdigit(str.at(i)))
    //    {
    //        buffer.push_back(str.at(i++));
    //    }
    //
    //    --i;
    //    tokens.push_back({.type = TokenType::int_lit});
    //    buffer.clear();
    //}
    // else if (c == ';')
    //{
    //    tokens.push_back({.type = TokenType::semi});
    //}
    // else if (std::isspace(c))
    //    // Otherwise, ignore whitespace characters
    //    continue;
}