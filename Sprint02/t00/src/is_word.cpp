#include "is_word.h"

bool lib::is_word(std::string& string)
{
    return std::all_of(string.begin(), string.end(), [](auto& c){return ::isalnum(c) || c == '\'' || c == '-';});
}
