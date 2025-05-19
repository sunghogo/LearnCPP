#include <iostream> // for std::cout

int main() {
    std::cout << "Hello world!"; // print Hello world! to console

    std::cout << 4; // print 4 to console

    int x{ 5 }; // define integer variable x, initialized with value 5
    std::cout << x; // print value of x (5) to console
    std::cout << "x is equal to: " << x;

    std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line
    std::cout << "My name is Alex." << std::endl;

    std::cout << "x is equal to: " << x << '\n'; // single quoted (by itself) (conventional)
    std::cout << "Yep." << "\n";                 // double quoted (by itself) (unconventional but okay)
    std::cout << "And that's all, folks!\n";     // between double quotes in existing text (conventional)

    std::cout << "Enter a number: "; // ask user for a number

    int y{};       // define variable y to hold user input (and value-initialize it)
    std::cin >> y; // get number from keyboard and store it in variable y
    std::cout << "You entered " << y << '\n';

    std::cin >> x >> y; // get two numbers and store in variable x and y respectively
    std::cout << "You entered " << x << " and " << y << '\n';

    return 0;
}
