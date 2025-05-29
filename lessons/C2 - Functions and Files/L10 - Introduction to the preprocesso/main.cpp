// Preprocessor Directions start with #, end with \n
#include <iostream> // preprocessor replaces the #include directive with the contents of the included file

// #define directive to specify macros (function-like (discourage) vs object-like)
// Object-like macros with substitution text (discouraged)
#define MY_NAME "Alex"

// Object-like macros w/0 substitution text, conditional compilation
#define PRINT_JOE

// Preprocessor directives do not carry over scopes unless #include
#include "Alex.h" // copies #define MY_NAME from Alex.h here

int main()
{
    std::cout << "My name is: " << MY_NAME << '\n';

    #ifdef PRINT_JOE
        std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
    #endif

    #ifdef PRINT_BOB
        std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
    #endif

    #ifndef PRINT_BOB
        std::cout << "Bob\n"; // will compile since ifndef
    #endif

    #if 0 // Don't compile anything starting here
        std::cout << "Bob\n";
        /* Some
        * multi-line
        * comment here
        */
        std::cout << "Steve\n";
    #endif // until this point

    #if 1 // always true, so the following code will be compiled
        std::cout << "Bob\n";
        /* Some
        * multi-line
        * comment here
        */
        std::cout << "Steve\n";
    #endif

    #define FOO 9 // Here's a macro substitution
    #ifdef FOO // This FOO does not get replaced with 9 because it’s part of another preprocessor directive
        std::cout << FOO << '\n'; // This FOO gets replaced with 9 because it's part of the normal code
    #endif

    std::cout << "My name is: " << MY_NAME << '\n'; // preprocessor replaces MY_NAME with "Alex"

    return 0;
}
