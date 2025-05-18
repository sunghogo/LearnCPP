#include <iostream>

/**
 * @brief Function description
 * @param[in] _ The count
 * @return Void
 */
void doSomething(int /*count*/) // ok: unnamed parameter will not generate warning
{
}

int doubleNumber(int x)
{
    return 2 * x;
}

int main()
{
    doSomething(1);

    std::cout << "Enter an integer value to double: ";
    int x{};
    std::cin >> x;
    std::cout << doubleNumber(x) << '\n';

    return 0;
}
