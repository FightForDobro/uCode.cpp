#ifndef MIGHTYWIZARD_BString_H
#define MIGHTYWIZARD_BString_H

#include <algorithm>

namespace CBL
{
    template <class T>
    class BasicString
    {
    public:
        using iterator = T*;
        static const size_t npos = -1ul;


        BasicString();
        BasicString(const BasicString<T>& str);
        BasicString(const BasicString<T>& str, size_t pos, size_t len = npos);
        explicit BasicString(const T* str);
        BasicString(const T* str, size_t n);
        BasicString(size_t n, T c);
        BasicString(iterator first, iterator last);
        virtual ~BasicString();


        // iterators
        iterator begin() const;
        iterator end() const;

        // capacity
        size_t length() const;

        // element access
        T& operator[](size_t index) const;
        T& at(size_t index) const;
        T& back() const;
        T& front() const;

        // modifiers
        BasicString<T>& operator=(const BasicString<T>& str);
        BasicString<T>& operator=(const T* str);
        BasicString<T>& operator=(const T c);

        BasicString<T>& operator+=(const BasicString<T>& str);
        BasicString<T>& operator+=(const T* str);
        BasicString<T>& operator+=(const T c);

        void append(const BasicString<T>& str);
        void append(const T* str);
        void append(const T* str, size_t n);
        void append(size_t n, T c);
        void append(iterator first, iterator last);

        void swap(BasicString<T>& str);

        // string operations
        const T* c_str() const;

        virtual int compare(const BasicString<T>& str) const;
        virtual int compare(const T* str) const;

    protected:
        size_t m_size{0};
        T* m_buffer{nullptr};
    };

    template <class T>
    BasicString<T>::BasicString()
            : m_size(0), m_buffer(new T[1])
    {
        m_buffer[0] = '\0';
    }

    template <class T>
    BasicString<T>::BasicString(const BasicString<T>& str)
            : m_size(str.m_size)
    {
        m_buffer = new T[m_size + 1];
        std::copy(str.m_buffer, str.m_buffer + str.m_size, m_buffer);
        m_buffer[m_size] = '\0';
    }

    template <class T>
    BasicString<T>::BasicString(const BasicString<T>& str, size_t pos, size_t len){
        if (pos >= str.m_size)
            throw std::out_of_range("BasicString: out of range");
        else {
            if (len != npos && str.m_size > pos + len) {
                m_size = len;
            } else {
                m_size = str.m_size - pos;
            }
            m_buffer = new T[m_size + 1];
            std::copy(str.m_buffer + pos, str.m_buffer + str.m_size, m_buffer);
            m_buffer[m_size] = '\0';
        }
    }

    template <class T>
    BasicString<T>::BasicString(const T* str)
            : BasicString(str, std::char_traits<T>::length(str))
    {}

    template <class T>
    BasicString<T>::BasicString(const T* str, size_t n)
            : m_size(n), m_buffer(new T[m_size + 1])
    {
        std::copy(str, str + m_size, m_buffer);
        m_buffer[m_size] = '\0';
    }
    template <class T>
    BasicString<T>::BasicString(size_t n, T c)
            : m_size(n), m_buffer(new T[m_size + 1])
    {
        for (size_t i = 0; i < m_size; ++i)
            m_buffer[i] = c;
        m_buffer[m_size] = '\0';
    }

    template <class T>
    BasicString<T>::BasicString(iterator first, iterator last)
            : m_size(std::distance(first, last)), m_buffer(new T[m_size + 1])
    {
        for (size_t i = 0; first != last; ++first, ++i)
            m_buffer[i] = *first;
        m_buffer[m_size] = '\0';
    }

    template <class T>
    BasicString<T>::~BasicString() {
        delete[] m_buffer;
    }

// iterators
    template <class T>
    typename BasicString<T>::iterator BasicString<T>::begin() const {
        return m_buffer;
    }
    template <class T>
    typename BasicString<T>::iterator BasicString<T>::end() const {
        return m_buffer + m_size;
    }

// capacity
    template <class T>
    size_t BasicString<T>::length() const {
        return m_size;
    }

// element access
    template <class T>
    T& BasicString<T>::operator[](size_t index) const {
        return m_buffer[index];
    }
    template <class T>
    T& BasicString<T>::at(size_t index) const {
        if (index >= m_size)
            throw std::out_of_range("BasicString: out of range");
        return m_buffer[index];
    }
    template <class T>
    T& BasicString<T>::back() const {
        return m_buffer[m_size - 1];
    }
    template <class T>
    T& BasicString<T>::front() const {
        return m_buffer[0];
    }

    template <class T>
    BasicString<T>& BasicString<T>::operator=(const BasicString<T>& str) {
        delete[] m_buffer;
        m_size = str.m_size;
        m_buffer = new T[m_size + 1];
        std::copy(str.m_buffer, str.m_buffer + str.m_size, m_buffer);
        m_buffer[m_size] = '\0';

        return *this;
    }
    template <class T>
    BasicString<T>& BasicString<T>::operator=(const T* str) {
        delete[] m_buffer;
        m_size = std::char_traits<T>::length(str);
        m_buffer = new T[m_size + 1];
        std::copy(str, str + m_size, m_buffer);
        m_buffer[m_size] = '\0';

        return *this;
    }
    template <class T>
    BasicString<T>& BasicString<T>::operator=(const T c) {
        delete[] m_buffer;
        m_size = 1;
        m_buffer = new T[2];
        m_buffer[0] = c;
        m_buffer[1] = '\0';

        return *this;
    }

    template <class T>
    BasicString<T>& BasicString<T>::operator+=(const BasicString<T>& str) {
        T* new_obj = new T[m_size + str.m_size + 1];
        std::copy(m_buffer, m_buffer + m_size, new_obj);
        std::copy(str.m_buffer, str.m_buffer + str.m_size, new_obj + m_size);

        delete[] m_buffer;
        m_buffer = new_obj;

        m_size += str.m_size;
        m_buffer[m_size] = '\0';

        return *this;
    }
    template <class T>
    BasicString<T>& BasicString<T>::operator+=(const T* str) {
        return *this += (BasicString<T>(str));
    }
    template <class T>
    BasicString<T>& BasicString<T>::operator+=(const T c) {
        return *this += (BasicString(&c, 1));
    }

    template <class T>
    void BasicString<T>::append(const BasicString<T>& str) {
        *this += (BasicString<T>(str));
    }

    template <class T>
    void BasicString<T>::append(const T* str) {
        *this += (BasicString<T>(str));
    }

    template <class T>
    void BasicString<T>::append(const T* str, size_t n) {
        if (n > std::char_traits<T>::length(str))
            n = std::char_traits<T>::length(str);
        *this += (BasicString(str, n));
    }

    template <class T>
    void BasicString<T>::append(size_t n, T c) {
        *this += (BasicString(n, c));
    }

    template <class T>
    void BasicString<T>::append(iterator first, iterator last) {
        *this += (BasicString(first, last));
    }

    template <class T>
    void BasicString<T>::swap(BasicString<T>& str) {
        std::swap(m_buffer, str.m_buffer);
        std::swap(m_size, str.m_size);
    }

// string operations
    template <class T>
    const T* BasicString<T>::c_str() const {
        return m_buffer;
    }

    template <class T>
    int BasicString<T>::compare(const BasicString<T>& str) const {
        size_t left = m_size;
        size_t right = str.m_size;
        int result = std::char_traits<T>::compare(m_buffer, str.m_buffer,
                                                  std::min(left, right));
        if (result != 0)
            return result;
        if (left < right)
            return -1;
        else if (left > right)
            return 1;
        return 0;
    }
    template <class T>
    int BasicString<T>::compare(const T* str) const {
        return compare(BasicString<T>(str));
    }

    template <class T>
    CBL::BasicString<T> operator+(const CBL::BasicString<T>& lhs,
                                  const CBL::BasicString<T>& rhs) {
        CBL::BasicString<T> str(lhs);
        str.append(rhs);
        return str;
    }

    template <class T>
    CBL::BasicString<T> operator+(const T* lhs, const CBL::BasicString<T>& rhs) {
        CBL::BasicString<T> str(lhs);
        str.append(rhs);
        return str;
    }

    template <class T>
    CBL::BasicString<T> operator+(const CBL::BasicString<T>& lhs, const T* rhs) {
        CBL::BasicString<T> str(lhs);
        str.append(rhs);
        return str;
    }

    template <class T>
    CBL::BasicString<T> operator+(const T lhs, const CBL::BasicString<T>& rhs) {
        CBL::BasicString<T> str(lhs);
        str.append(rhs);
        return str;
    }

    template <class T>
    CBL::BasicString<T> operator+(const CBL::BasicString<T>& lhs, const T rhs) {
        CBL::BasicString<T> str(lhs);
        str.append(rhs);
        return str;
    }

    template <class T>
    bool operator==(const CBL::BasicString<T>& lhs, const CBL::BasicString<T>& rhs) {
        return std::lexicographical_compare(lhs.begin(), lhs.end(),
                                            rhs.begin(), rhs.end(),
                                            [] (const T& a, const T& b) { return a == b;});
    }
    template <class T>
    bool operator==(const T* lhs, const CBL::BasicString<T>& rhs) {
        // return CBL::BasicString<T>(lhs) == rhs;
        return operator==(CBL::BasicString<T>(lhs), rhs);
    }
    template <class T>
    bool operator==(const CBL::BasicString<T>& lhs, const T* rhs) {
        // return lhs == CBL::BasicString<T>(rhs);
        return operator==(lhs, CBL::BasicString<T>(rhs));
    }

    template <class T>
    bool operator!=(const CBL::BasicString<T>& lhs, const CBL::BasicString<T>& rhs) {
        return !(lhs == rhs);
    }
    template <class T>
    bool operator!=(const T* lhs, const CBL::BasicString<T>& rhs) {
        return !(lhs == rhs);
    }
    template <class T>
    bool operator!=(const CBL::BasicString<T>& lhs, const T* rhs) {
        return !(lhs == rhs);
    }

    template <class T>
    bool operator<(const CBL::BasicString<T>& lhs, const CBL::BasicString<T>& rhs) {
        return std::lexicographical_compare(lhs.begin(), lhs.end(),
                                            rhs.begin(), rhs.end());
    }
    template <class T>
    bool operator<(const T* lhs, const CBL::BasicString<T>& rhs) {
        return std::lexicographical_compare(lhs, lhs + std::char_traits<T>::length(lhs),
                                            rhs.begin(), rhs.end());
    }
    template <class T>
    bool operator<(const CBL::BasicString<T>& lhs, const T* rhs) {
        return std::lexicographical_compare(lhs.begin(), lhs.end(),
                                            rhs, rhs + std::char_traits<T>::length(rhs));
    }

    template <class T>
    bool operator<=(const CBL::BasicString<T>& lhs, const CBL::BasicString<T>& rhs) {
        return lhs < rhs || lhs == rhs;
    }
    template <class T>
    bool operator<=(const T* lhs, const CBL::BasicString<T>& rhs) {
        return lhs < rhs || lhs == rhs;
    }
    template <class T>
    bool operator<=(const CBL::BasicString<T>& lhs, const T* rhs) {
        return lhs < rhs || lhs == rhs;
    }

    template <class T>
    bool operator>(const CBL::BasicString<T>& lhs, const CBL::BasicString<T>& rhs) {
        return !(lhs < rhs) && !(lhs == rhs);
    }
    template <class T>
    bool operator>(const T* lhs, const CBL::BasicString<T>& rhs) {
        return !(lhs < rhs) && !(lhs == rhs);
    }
    template <class T>
    bool operator>(const CBL::BasicString<T>& lhs, const T* rhs) {
        return !(lhs < rhs) && !(lhs == rhs);
    }

    template <class T>
    bool operator>=(const CBL::BasicString<T>& lhs, const CBL::BasicString<T>& rhs) {
        return !(lhs < rhs);
    }

    template <class T>
    bool operator>=(const T* lhs, const CBL::BasicString<T>& rhs) {
        return !(lhs < rhs);
    }

    template <class T>
    bool operator>=(const CBL::BasicString<T>& lhs, const T* rhs) {
        return !(lhs < rhs);
    }
}

#endif //MIGHTYWIZARD_VECTOR_H
