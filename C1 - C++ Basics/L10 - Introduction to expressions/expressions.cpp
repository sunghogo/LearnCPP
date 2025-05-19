#include <iostream>

// five() is a function that returns the value 5
int five()
{
    return 5;
}

int main()
{
    int a{ 2 };             // initialize variable a with literal value 2
    int b{ 2 + 3 };         // initialize variable b with computed value 5
    int c{ (2 * 3) + 4 };   // initialize variable c with computed value 10
    int d{ b };             // initialize variable d with variable value 5
    int e{ five() };        // initialize variable e with function return value 5

    2;               // 2 is a literal that evaluates to value 2
    "Hello world!";  // "Hello world!" is a literal that evaluates to text "Hello world!"
    int x{};               // x is a variable that evaluates to the value held by variable x
    2 + 3;           // operator+ uses operands 2 and 3 to evaluate to value 5
    five();          // evaluates to the return value of function five()

    x = 5;           // x = 5 has side effect of assigning 5 to x, evaluates to x
    x = 2 + 3;       // has side effect of assigning 5 to x, evaluates to x
    std::cout << x;  // has side effect of printing value of x to console, evaluates to std::cout

    int y{ 2 + 3 }; // 2 + 3 is an expression that has no semicolon -- the semicolon is at the end of the statement containing the expression

    return 0;
}
