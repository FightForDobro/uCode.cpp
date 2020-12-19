#include "calc.h"

static void matchToMap(std::map<std::string, std::string>& m, const std::smatch& match) {
    m["operand1"] = match[1];
    m["operation"] = match[2];
    m["operand2"] = match[3];
    if (match.size() > 4)
        m["variable"] = match[4];
}

static bool checkInt(std::string x, std::string s, int& n) {
    size_t ind;
    try {
        n = std::stoi(x, &ind);
        return true;
    }
    catch (...) {
        std::cerr << s << " is out of range" << std::endl;
        return false;
    }
}

static bool check_item(const std::map<std::string, std::string>::iterator& it, int& n, const std::map<std::string, int>& var) {
    std::regex r("([?+|?-]{0,1}\\d+)");
    std::regex rw("([a-zA-Z]+)");
    std::smatch match;

    try {
        if (std::regex_match(it->second, match, r)) {
            if (!checkInt(it->second, it->first, n))
                return false;
        } else if (std::regex_match(it->second, match, rw)) {
            n = var.at(it->second);
        } else
            throw false;
        return true;
    }
    catch(...) {
        std::cerr << "invalid " << it->first << '\n';
        return false;
    }
}

static bool calc_operation(const std::map<std::string, std::string>::iterator& it, int& n, const int& s) {

    if (it->second == "+")
        n += s;

    else if (it->second == "-")
        n -= s;

    else if (it->second == "*")
        n *= s;

    else if (it->second == "/")
    {
        if (s == 0) {
            std::cerr << "division by zero\n";
            return false;
        }
        n /= s;
    }
    return true;
}

void calc(const std::smatch& match) {

    static std::map<std::string, int> var;
    std::map<std::string, std::string> map;
    matchToMap(map, match);

    auto it = map.begin();
    int n = 0, s = 0;
    if (!check_item(it, n, var) || !check_item(++it, s, var)
        || !calc_operation(++it, n, s)) {
        return;
    }
    if (match.size() > 4)
        var[(++it)->second] = n;
    std::cout << n << '\n';
}