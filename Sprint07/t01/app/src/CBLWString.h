#ifndef MIGHTYWIZARD_Wstring_H
#define MIGHTYWIZARD_Wstring_H

#include "BasicString.h"

namespace CBL
{
        class WString : public BasicString<wchar_t> {

        public:
            using BasicString<wchar_t>::BasicString;
            using BasicString<wchar_t>::operator=;
            using BasicString<wchar_t>::operator+=;

            size_t find(const WString& str, size_t pos = 0) const;
            size_t find(const WString* str, size_t pos = 0) const;
            size_t find(wchar_t c, size_t pos= 0) const;

            size_t rfind(const WString& str, size_t pos = 0) const;
            size_t rfind(const WString* str, size_t pos = 0) const;
            size_t rfind(wchar_t c, size_t pos = 0) const;

        };

        size_t WString::find(const WString& str, size_t pos) const {
            if (pos < m_size && pos >= 0)
                for (size_t i = pos; i < m_size; ++i)
                    if (wcsncmp(m_buffer + i, str.m_buffer, str.m_size) == 0)
                        return i;
            return npos;
        }
        size_t WString::find(const WString* str, size_t pos) const {
            if (pos < m_size && pos >= 0)
                for (size_t i = pos; i < m_size; ++i)
                    if (wcsncmp(m_buffer + i, str->m_buffer, str->m_size) == 0)
                        return i;
            return npos;
        }

        size_t WString::find(wchar_t c, size_t pos) const {
            if (pos < m_size && pos >= 0)
                for (size_t i = pos; i < m_size; ++i)
                    if (*(m_buffer + i) == c)
                        return i;
            return npos;
        }

        size_t WString::rfind(const WString& str, size_t pos) const {
            if (pos < m_size && pos >= 0)
                for (size_t i = pos; i >= 0; --i)
                    if (wcsncmp(m_buffer + i, str.m_buffer, str.m_size) == 0)
                        return i;
            return npos;
        }
        size_t WString::rfind(const WString* str, size_t pos) const {
            if (pos < m_size && pos >= 0)
                for (size_t i = pos; i >= 0; --i)
                    if (wcsncmp(m_buffer + i, str->m_buffer, str->m_size) == 0)
                        return i;
            return npos;
        }
        size_t WString::rfind(wchar_t c, size_t pos) const {
            if (pos < m_size && pos >= 0)
                for (size_t i = pos; i >= 0; --i)
                    if (*(m_buffer + i) == c)
                        return i;
            return npos;
        }

}

#endif //MIGHTYWIZARD_VECTOR_H
