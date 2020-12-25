#include <iostream>
#include <string>
#include <regex>

#include "Worker.h"
#include "MultithreadedClass.h"

static void check(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "usage: ./simpleWorkerV2 [addValue] [subtractValue] [count]" << std::endl;
        exit(EXIT_FAILURE);
    }
    int add = 0;
    int subst = 0;
    int count = 0;
    try {
        if (!std::regex_match(argv[1], std::regex(R"(^[+|-]{0,1}\d{1,4}$)"))
            || !std::regex_match(argv[2], std::regex(R"(^[+|-]{0,1}\d{1,4}$)"))
            || !std::regex_match(argv[3], std::regex(R"(^\d{1,2}$)"))) {
            throw false;
        }
        add = std::stoi(argv[1]);
        subst = std::stoi(argv[2]);
        count = std::stoi(argv[3]);
    }
    catch (...) {
        std::cerr << "Incorrect values" << std::endl;
        exit(EXIT_FAILURE);
    }
    if (!(std::abs(add) <= 2000) || !(std::abs(subst) <= 2000)
        || count > 10 || count < 5) {
        std::cerr << "Incorrect values" << std::endl;
        exit(EXIT_FAILURE);
    }
}

int main(int argc, char** argv) {

    check(argc, argv);
    int addValue = std::stoi(argv[1]);
    int subtractValue = std::stoi(argv[2]);
    int count = std::stoi(argv[3]);

    MultithreadedClass obj;
    Worker worker;

    for (auto i = 0; i < count; ++i) {
        worker.startNewThread(&MultithreadedClass::add, &obj, addValue);
    }

    for (auto i = 0; i < count; ++i) {
        worker.startNewThread(&MultithreadedClass::subtract, &obj, subtractValue);
    }

    worker.joinAllThreads();

    std::cout << obj.getInt() << std::endl;

    return 0;
}