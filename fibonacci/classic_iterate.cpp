#include <iostream>

constexpr uintmax_t fibonacci(size_t n)
{
    uintmax_t first = 0, second = 1, next = 0;
    for (size_t c = 0; c <= n; c++)
    {
        if (c <= 1)
            next = c;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
    }

    return next;
}

int main()
{
    std::cout << fibonacci(13);
    return 0;
}
