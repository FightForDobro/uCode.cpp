#include <algorithm>

namespace Utils
{
    // [from, to]
    template<typename T>
    bool IsInRange(const T &val, const T &from, const T &to)
    {return (val - from) * (val - to) <= 0;}

    template <typename T>
    bool IsInRange(const T& val, const std::pair<const T&, const T&>& minmax)
    {return (val - minmax.first) * (val - minmax.second) <= 0;}

    // (from, to)
    template <typename T>
    bool IsInsideRange(const T& val, const T& from, const T& to)
    {return (val - from) * (val - to) < 0;};

    template <typename T>
    bool IsInsideRange(const T& val, const std::pair<const T&, const T&>& minmax)
    {return (val - minmax.first) * (val - minmax.second) < 0;}

    // change the object if necessary
    // and return the corresponding value of the operation success
    template <class T, class U = T>
    bool Modify(T& obj, U&& new_value)
    {return (obj = std::forward<T>(new_value)) ? obj != new_value : obj != new_value;}

    // fully remove the specified elements from the collection
    template <class Collection, class T>
    void RemoveAll(Collection& c, const T& value)
    {c.erase(std::remove(c.begin(), c.end(), value));}

    // fully remove the specified elements from the collection
    template <class Collection, class Pred>
    void RemoveAllIf(Collection& c, Pred&& predicate)
    {c.erase(std::remove_if(c.begin(), c.end(), std::forward<Pred>(predicate)), c.end());}

    template <class Collection, class T>
    auto Find(Collection& c, const T& value)
    {return std::find(c.begin(), c.end(), value);}

    template <class Collection, class Pred>
    auto FindIf(Collection& c, Pred&& predicate)
    {return std::find_if(c.begin(), c.end(), std::forward<Pred>(predicate));}

    template <class Collection, class T>
    bool Contains(const Collection& c, const T& value)
    {return std::find(begin(c), end(c), value) != c.end();}

    template <class Collection, class Pred>
    bool ContainsIf(const Collection& c, Pred&& predicate)
    {return std::find_if(begin(c), end(c), std::forward<Pred>(predicate)) != c.end();}

    template <class Collection, class Pred>
    int CountIf(const Collection& c, Pred&& predicate)
    {return std::count_if(begin(c), end(c), std::forward<Pred>(predicate));}

    template <class T, class... Args>
    const auto& Min(const T& arg, const Args&... args)
    {
        const std::vector<T> v = {arg, args...};
        return *std::min_element(v.begin(), v.end());
    }

    template <class T, class... Args>
    const auto& Max(const T& arg, const Args&... args)
    {
        const std::vector<T> v = {arg, args...};
        return *std::max_element(v.begin(), v.end());
    }

    template <class Collection>
    auto MaxElement(const Collection& c)
    {return std::max_element(c.begin(), c.end());}

    template <class Collection>
    auto MinElement(const Collection& c)
    {return std::min_element(c.begin(), c.end());}

    template <class Collection, class Comp>
    auto MaxElement(const Collection& c, Comp&& comparator)
    {return std::max_element(c.begin(), c.end(), comparator);}

    template <class Collection, class Comp>
    auto MinElement(const Collection& c, Comp&& comparator)
    {return std::min_element(c.begin(), c.end(), std::forward<Comp>(comparator));}

}