#include <iostream>

constexpr uintmax_t fibonacci(size_t n)
{
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    std::cout << fibonacci(13);
    return 0;
}
