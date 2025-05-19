#include <iostream>

int main() {
    std::cout << "Enter an integer: ";

    int in {};
    std::cin >> in;

    std::cout << "Double that number is: " << in * 2 << std::endl;
    return 0;
}
