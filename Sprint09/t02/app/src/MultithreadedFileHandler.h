#ifndef SIMPLEWORKERV2_MULTITHREADEDFILEHANDLER_H
#define SIMPLEWORKERV2_MULTITHREADEDFILEHANDLER_H

#include <condition_variable>
#include <mutex>
#include <string>

class MultithreadedFileHandler {
public:
    MultithreadedFileHandler() = default;
    ~MultithreadedFileHandler() = default;

    void processFile()
    {
        std::unique_lock<std::mutex> lock(m_mutex);
        m_condVar.wait(lock, [&](){return m_fileLoaded;});
        std::cout << m_file << std::endl;
        m_fileLoaded = false;
    }

    void loadFile(const std::string& fileName)
    {
        std::ifstream file(fileName);
        std::istreambuf_iterator<char> buf;
        m_file = std::string(std::istreambuf_iterator<char>(file), buf);
        m_fileLoaded = true;
        m_condVar.notify_all();
    }

private:
    std::string m_file;
    std::mutex m_mutex;
    std::condition_variable m_condVar;
    bool m_fileLoaded{false};
};

#endif //SIMPLEWORKERV2_MULTITHREADEDFILEHANDLER_H
