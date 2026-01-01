#include "MutantStack.hpp"

int main()
{
    std::cout << "===== BASIC STACK TEST =====" << std::endl;
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Top: " << mstack.top() << std::endl;

    mstack.pop();
    std::cout << "Size after pop: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << "\n===== ITERATION TEST =====" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin();
         it != mstack.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    std::cout << "\n===== MODIFY THROUGH ITERATOR =====" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin();
         it != mstack.end(); ++it)
    {
        *it += 1;
    }

    for (MutantStack<int>::iterator it = mstack.begin();
         it != mstack.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    std::cout << "\n===== CONST ITERATOR TEST =====" << std::endl;
    const MutantStack<int> constStack(mstack);

    for (MutantStack<int>::const_iterator it = constStack.begin();
         it != constStack.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    std::cout << "\n===== COPY & ASSIGNMENT TEST =====" << std::endl;
    MutantStack<int> copyStack(constStack);
    MutantStack<int> assignStack;
    assignStack = constStack;

    std::cout << "Copy size: " << copyStack.size() << std::endl;
    std::cout << "Assign size: " << assignStack.size() << std::endl;

    std::cout << "\n===== STACK BEHAVIOR CHECK =====" << std::endl;
    std::stack<int> stdstack;
    for (int i = 0; i < 5; ++i)
    {
        mstack.push(i);
        stdstack.push(i);
    }

    while (!stdstack.empty())
    {
        if (mstack.top() != stdstack.top())
        {
            std::cout << "Mismatch!" << std::endl;
            return 1;
        }
        mstack.pop();
        stdstack.pop();
    }

    std::cout << "Stack behavior identical to std::stack" << std::endl;
    std::cout << "\n===== ALL TESTS PASSED =====" << std::endl;

    return 0;
}
