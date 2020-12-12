#ifndef BOOKSAVER_CMD_HANDLER_H
#define BOOKSAVER_CMD_HANDLER_H

#include <vector>
#include "book_saver.h"

#define add_cmd "add"
#define del_cmd "delete"
#define read_cmd "read"
#define list_cmd "list"
#define quit_cmd "quit"

#define inv_cmd "invalid command"

namespace lib
{
    void cmd_handler(std::string &cmd, std::map<std::string, std::string> &books);
};

#endif //BOOKSAVER_CMD_HANDLER_H
