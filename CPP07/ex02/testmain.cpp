#include <iostream>
// #include <cstdlib>
#include <ctime>
#include <Array.hpp>

#define MAX_VAL 10

class Awesome
{
private:
    int _n;
public:
    Awesome(void) : _n(42) {}     // default constructor sets value = 42
    int get(void) const { return this->_n; }
};

std::ostream& operator<<(std::ostream& o, Awesome const& rhs)
{
    o << rhs.get();
    return o;
}

int main()
{
    std::cout << "Creating Array<Awesome> of size 5\n";
    Array<Awesome> arr(5);

    std::cout << "\nDefault values:\n";
    for (unsigned int i = 0; i < arr.size(); i++)
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;

    std::cout << "\nTesting deep copy\n";
    Array<Awesome> copy = arr;   // copy constructor
    Array<Awesome> assign(5);
    assign = arr;                // copy assignment

    std::cout << "Copy[2] = " << copy[2] << std::endl;
    std::cout << "Assign[2] = " << assign[2] << std::endl;

    std::cout << "\nTrying index out of bounds:\n";
    try {
        std::cout << arr[10] << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

// int main()
// {
//     std::cout << "Creating Array<int> numbers(" << MAX_VAL << ")" << std::endl;
//     Array<int> numbers(MAX_VAL);

//     std::cout << "Creating raw mirror array of size " << MAX_VAL << std::endl;
//     int* mirror = new int[MAX_VAL];

//     std::cout << "\nFilling numbers and mirror with random values...\n" << std::endl;
//     std::srand(std::time(NULL));

//     for (int i = 0; i < MAX_VAL; ++i)
//     {
//         const int value = std::rand();
//         numbers[i] = value;
//         mirror[i] = value;

//         std::cout << "  i = " << i
//                   << " | numbers[i] = " << numbers[i]
//                   << " | mirror[i] = " << mirror[i] << std::endl;
//     }

//     std::cout << "\nChecking that numbers and mirror still match...\n" << std::endl;
//     bool ok = true;
//     for (int i = 0; i < MAX_VAL; ++i)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "  MISMATCH at i = " << i
//                       << " | mirror[i] = " << mirror[i]
//                       << " | numbers[i] = " << numbers[i] << std::endl;
//             ok = false;
//             break;
//         }
//     }

//     if (ok)
//         std::cout << "All values match ✅" << std::endl;
//     else
//         std::cout << "There was at least one mismatch ❌" << std::endl;

//     std::cout << "\nTesting copy constructor inside a scope...\n" << std::endl;
//     {
//         Array<int> tmp = numbers;   // copy-construct from numbers
//         Array<int> test(tmp);       // copy-construct from tmp

//         std::cout << "  tmp.size()  = " << tmp.size()  << std::endl;
//         std::cout << "  test.size() = " << test.size() << std::endl;

//         std::cout << "  Checking first few elements of tmp and test:" << std::endl;
//         for (unsigned int i = 0; i < tmp.size() && i < 5; ++i)
//         {
//             std::cout << "    i = " << i
//                       << " | tmp[i] = " << tmp[i]
//                       << " | test[i] = " << test[i] << std::endl;
//         }

//         std::cout << "Leaving scope: tmp and test will be destroyed here." << std::endl;
//     }

//     std::cout << "\nTesting out-of-range access (negative index)...\n" << std::endl;
//     try
//     {
//         numbers[-2] = 0; // will be converted to a big unsigned index and fail
//     }
//     catch (const std::exception& e)
//     {
//         std::cerr << "  Caught exception for numbers[-2]: " << e.what() << std::endl;
//     }

//     std::cout << "\nTesting out-of-range access (index == size)...\n" << std::endl;
//     try
//     {
//         numbers[MAX_VAL] = 0; // also out of range
//     }
//     catch (const std::exception& e)
//     {
//         std::cerr << "  Caught exception for numbers[" << MAX_VAL
//                   << "]: " << e.what() << std::endl;
//     }

//     std::cout << "\nRefilling numbers with new random values...\n" << std::endl;
//     for (int i = 0; i < MAX_VAL; ++i)
//     {
//         numbers[i] = std::rand();
//         std::cout << "  numbers[" << i << "] = " << numbers[i] << std::endl;
//     }

//     std::cout << "\nDeleting mirror array and exiting.\n" << std::endl;
//     delete [] mirror;

//     return 0;
// }
