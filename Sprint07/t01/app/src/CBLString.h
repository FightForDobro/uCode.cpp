#ifndef MIGHTYWIZARD_String_H
#define MIGHTYWIZARD_String_H

#include "BasicString.h"

namespace CBL {

    class String : public BasicString<char> {

    public:
        using BasicString<char>::BasicString;
        using BasicString<char>::operator=;
        using BasicString<char>::operator+=;

        size_t find(const String &str, size_t pos = 0) const;

        size_t find(const String *str, size_t pos = 0) const;

        size_t find(char c, size_t pos = 0) const;

        size_t rfind(const String &str, size_t pos = 0) const;

        size_t rfind(const String *str, size_t pos = 0) const;

        size_t rfind(char c, size_t pos = 0) const;

    };

    size_t String::find(const String &str, size_t pos) const {
        if (pos < m_size && pos >= 0)
            for (size_t i = pos; i < m_size; ++i)
                if (strncmp(m_buffer + i, str.m_buffer, str.m_size) == 0)
                    return i;
        return npos;
    }

    size_t String::find(const String *str, size_t pos) const {
        if (pos < m_size && pos >= 0)
            for (size_t i = pos; i < m_size; ++i)
                if (strncmp(m_buffer + i, str->m_buffer, str->m_size) == 0)
                    return i;
        return npos;
    }

    size_t String::find(char c, size_t pos) const {
        if (pos < m_size && pos >= 0)
            for (size_t i = pos; i < m_size; ++i)
                if (*(m_buffer + i) == c)
                    return i;
        return npos;
    }

    size_t String::rfind(const String &str, size_t pos) const {
        if (pos < m_size && pos >= 0)
            for (size_t i = pos; i >= 0; --i)
                if (strncmp(m_buffer + i, str.m_buffer, str.m_size) == 0)
                    return i;
        return npos;
    }

    size_t String::rfind(const String *str, size_t pos) const {
        if (pos < m_size && pos >= 0)
            for (size_t i = pos; i >= 0; --i)
                if (strncmp(m_buffer + i, str->m_buffer, str->m_size) == 0)
                    return i;
        return npos;
    }

    size_t String::rfind(char c, size_t pos) const {
        if (pos < m_size && pos >= 0)
            for (size_t i = pos; i >= 0; --i)
                if (*(m_buffer + i) == c)
                    return i;
        return npos;
    }
}

#endif //MIGHTYWIZARD_VECTOR_H
