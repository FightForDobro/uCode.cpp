#ifndef MIGHTYWIZARD_VECTOR_H
#define MIGHTYWIZARD_VECTOR_H

#include <algorithm>

namespace CBL
{
    template <class T>
    class Vector {
    public:
        using iterator = T *;

        Vector() : Vector(0) {}

        explicit Vector(size_t size) : m_size(size), m_capacity(size)
        {
            m_buffer = new T[size];
            for (size_t i = 0; i < size; i++)
                m_buffer[i] = T();
        }

        Vector(size_t size, const T &value) : Vector(size)
        {
            for (size_t i = 0; i < size; i++)
                m_buffer[i] = value;

        }

        Vector(iterator first, iterator last) : Vector(std::distance(first, last))
        {
            std::copy(first, last, m_buffer);
        }

        Vector(const std::initializer_list <T> &lst) : Vector(lst.begin(), lst.end()){}

        Vector(const Vector<T> &other)
        {
            auto *vec = new Vector(other.begin(), other.end());
            m_buffer = vec->m_buffer;
            m_size = other.m_size;
            m_capacity = other.m_capacity;
        }

        ~Vector()
        {
            delete[] m_buffer;
        }

        Vector<T> &operator=(const Vector<T> &other)
        {

            if (this == other)
            {
                delete[] m_buffer;
                this = Vector(other);
            }

            return *this;
        }

        bool operator==(const Vector<T> &other) const
        {
            return std::equal(begin(), end(), other.begin(), other.end());
        }

        bool operator!=(const Vector<T> &other) const
        {
            return !std::equal(begin(), end(), other.begin(), other.end());
        }

        bool operator<(const Vector<T> &other) const
        {
            return std::lexicographical_compare(begin(), end(), other.begin(), end());
        }

        bool operator>(const Vector<T> &other) const
        {
            return std::lexicographical_compare(begin(), end(), other.begin(), end(),
                                                [](const T& x, const T& y){return x > y;});
        }

        bool operator<=(const Vector<T> &other) const
        {

            return std::lexicographical_compare(begin(), end(), other.begin(), end(),
                                                [](const T& x, const T& y){return x <= y;});
        }

        bool operator>=(const Vector<T> &other) const
        {
            return std::lexicographical_compare(begin(), end(), other.begin(), end(),
                                                [](const T& x, const T& y){return x >= y;});
        }


        // iterators
        iterator begin() const
        {
            return m_buffer;
        }

        iterator end() const
        {
            return &m_buffer[m_size];
        }

        // capacity
        size_t size() const
        {
            return m_size;
        }

        size_t capacity() const
        {
            return m_capacity;
        }

        bool isEmpty() const
        {
            return !m_size;
        }

        void resize(size_t size, const T& value = T())
        {
            T* new_vector = new T[size];

            if (size >= m_capacity)
            {
                for (; m_capacity < size; ++m_capacity)
                    m_buffer[m_capacity] = value;
                m_size = size;
            }
            else
            {
                std::move(begin(), end(), new_vector);
                for (; m_capacity < size; ++m_capacity)
                    new_vector[m_capacity] = value;
                delete[] m_buffer;
                m_size = size;
                m_buffer = new_vector;
            }
        }

        void reserve(size_t size)
        {
            if (size > m_capacity)
            {
                T* new_obj = new T[size];
                m_capacity = size;
                std::move(begin(), end(), new_obj);
                for (size_t i = m_size; i < size; ++i) new_obj[i] = T();
                delete[] m_buffer;
                m_buffer = new_obj;
            }
        }

        // element access
        T& operator[](size_t index) const
        {
            return m_buffer[index];
        }

        T& at(size_t index) const
        {
            if (index >= m_size)
                throw std::out_of_range(
                        "CBL::Vector.at(" + std::to_string(index) + ")" +
                        ": index (which is " + std::to_string(index) + " >= this->size() (which is 5)");
            return m_buffer[index];
        }

        T* data() const {
            return m_buffer;
        }

        // modifiers
        void push_back(const T& value)
        {
            *end() = value;
            if (m_size == m_capacity)
                m_size++;
            m_capacity++;
        }

        void pop_back()
        {
            m_size--;
        }

        iterator insert(iterator pos, const T& value)
        {
            size_t distance = std::distance(begin(), pos);

            if (distance == m_size) {
                push_back(value);
                return  end() - 1;
            } else {

                for (size_t i = m_size; i > distance; --i)
                    m_buffer[i] = m_buffer[i - 1];

                m_buffer[distance] = value;
                m_size++;
            }
            return pos;
        }

        iterator erase(iterator pos)
        {
            auto res = end();
            if (pos != res) {
                res = pos;
                for (auto it = pos; it != end() - 1; ++it) {
                    *it = *(it + 1);
                }
            }
            m_size--;
            return res;
        }
        iterator erase(iterator first, iterator last)
        {
            size_t distance = std::distance(first, last);
            if (distance == m_size) {
                m_size = 0;
                return nullptr;
            } else {
                auto it = first;
                for (; it != last; ++it)
                    *it = *(it + distance);
                m_size -= distance;
                return it;
            }
        }

        void clear()
        {
            erase(begin(), end());
        }

    private:
        size_t m_size{0};
        size_t m_capacity{0};
        T* m_buffer{nullptr};
    };
}

#endif //MIGHTYWIZARD_VECTOR_H
