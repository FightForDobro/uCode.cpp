#ifndef VECTOR_WORKER_H
#define VECTOR_WORKER_H

#include <utility>
#include <thread>
#include <vector>

class Worker {
    public:
        Worker() = default;
        ~Worker()
        {
            joinAllThreads();
        }

        Worker(const Worker &) = delete;
        Worker(const Worker &&) = delete;
        Worker& operator=(const Worker&) = delete;

        template <typename Function, class... Args>
        void startNewThread(Function&& func, Args&&... args) {
            m_workerThreads.emplace_back(func, std::forward<Args>(args)...);
        }

        void joinAllThreads()
        {
            for (std::thread& t : m_workerThreads)
                if (t.joinable())
                    t.join();
        }

    private:
        std::vector<std::thread> m_workerThreads;
};

#endif //VECTOR_WORKER_H
