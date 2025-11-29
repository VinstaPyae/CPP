#include "iter.hpp"

// Example function to print an element (const reference)
template <typename T>
void print(T const &x)
{
    std::cout << x << " ";
}

// Example function to double an element (modifiable)
void doubleValue(int &x)
{
    x *= 2;
}

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    size_t len = 5;

    std::cout << "Original numbers: ";
    iter(numbers, len, print);
    std::cout << std::endl;

    iter(numbers, len, doubleValue);

    std::cout << "After doubling: ";
    iter(numbers, len, print);
    std::cout << std::endl;

    std::string words[] = {"hello", "world", "templates"};
    size_t wlen = 3;

    std::cout << "Words: ";
    iter(words, wlen, print);
    std::cout << std::endl;

    return 0;
}
