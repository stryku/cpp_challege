#include <iostream>
#include <type_traits>

template <size_t n>
constexpr uintmax_t fibonacci()
{
    return fibonacci<n - 1>() + fibonacci<n - 2>();
}

template <>
constexpr uintmax_t fibonacci<0>()
{
    return 0;
}

template <>
constexpr uintmax_t fibonacci<1>()
{
    return 1;
}

int main()
{
    std::cout << fibonacci<13>();
    return 0;
}
