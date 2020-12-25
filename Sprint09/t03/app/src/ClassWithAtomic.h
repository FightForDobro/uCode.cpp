#ifndef SIMPLEWORKERV2_MULTITHREADEDFILEHANDLER_H
#define SIMPLEWORKERV2_MULTITHREADEDFILEHANDLER_H

#include <atomic>
#include <algorithm>
#include <mutex>
#include <vector>

class ClassWithAtomic {
public:
    ClassWithAtomic() = default;
    ~ClassWithAtomic() = default;

    void addToInt(int addValue)
    {
        m_int.fetch_add(abs(addValue));
    }

    void subtractFromInt(int subtractValue)
    {
        m_int.fetch_sub(abs(subtractValue));
    }

    void pushToVector(int value)
    {
        std::lock_guard lock(m_vecMutex);
        m_vector.push_back(value);
    }

    void eraseFromVector(int value)
    {
        std::lock_guard lock(m_vecMutex);
        auto pos = std::remove_if(m_vector.begin(), m_vector.end(),
                                  [&value](int& i) {return i == value;});
        m_vector.erase(pos, m_vector.end());
    }

    int getInt() const
    {
        return m_int;
    }

    std::vector<int> getVector() const {
        return m_vector;
    }

private:
    std::mutex m_vecMutex;
    std::atomic<int> m_int = 0;
    std::vector<int> m_vector;
};

#endif //SIMPLEWORKERV2_MULTITHREADEDFILEHANDLER_H
