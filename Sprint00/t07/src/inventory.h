#ifndef AUTOMATON_MEADSONG_H
#define AUTOMATON_MEADSONG_H

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <map>

#define invcmd "Invalid command."
#define invitm "Invalid item."
#define fulinv "Inventory is full."

#define i_cmd "insert"
#define r_cmd "remove"
#define s_cmd "show"
#define h_cmd "help"
#define e_cmd "exit"

namespace lib
{
    void validate_cmd(std::string &cmd);
    void insert(std::vector<std::string>& inventory, std::string item);
    void remove(std::vector<std::string>& inventory, std::string item);
    void show(std::vector<std::string>& inventory);
    void help();
}

#endif //AUTOMATON_MEADSONG_H
