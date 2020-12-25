#ifndef VECTOR_WORKER_H
#define VECTOR_WORKER_H

#include <utility>
#include <thread>

class Worker {
    public:
        Worker() = default;
        ~Worker()
        {
            joinThread();
            delete m_thread;
        }

        template <typename Function, class... Args>
        void startWorker(Function&& func, Args&&... args)
        {
            joinThread();
            m_thread = new std::thread(func, std::forward<Args>(args)...);
        }

    void joinThread()
        {
            if (m_thread)
            {
                m_thread->join();
                delete m_thread;
                m_thread = nullptr;
            }
        }

    private:
        std::thread* m_thread{nullptr};
};

#endif //VECTOR_WORKER_H
