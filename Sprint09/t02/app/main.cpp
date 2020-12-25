#include <iostream>
#include <fstream>

#include "Worker.h"
#include "ClassWithAtomic.h"

static void check(int argc, char *argv[]) {
    if (argc != 3) {
        std::cerr << "usage: ./multithreadedFileHandler [file1] [file2]" << std::endl;
        exit(EXIT_FAILURE);
    }
    std::ifstream file1(argv[1]);
    std::ifstream file2(argv[2]);

    if (!file1 || !file2) {
        std::cerr << "error" << std::endl;
        exit(EXIT_FAILURE);
    }
}

int main(int argc, char **argv) {

    check(argc, argv);

    MultithreadedFileHandler obj;
    Worker worker;

    worker.startNewThread(&MultithreadedFileHandler::processFile, &obj);
    worker.startNewThread(&MultithreadedFileHandler::loadFile, &obj, argv[1]);

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "-----1 second sleep-----" << std::endl;

    worker.startNewThread(&MultithreadedFileHandler::processFile, &obj);
    worker.startNewThread(&MultithreadedFileHandler::loadFile, &obj, argv[2]);

    worker.joinAllThreads();
}