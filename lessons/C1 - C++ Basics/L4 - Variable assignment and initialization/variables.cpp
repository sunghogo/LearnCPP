#include <iostream>

int main()
{
    /*
        int width; // define a variable named width
        width = 5; // copy assignment of value 5 into variable width
        std::cout << width; // prints 5
        width = 7; // change value stored in variable width to 7
        std::cout << width; // prints 7
    */

    /*
        int width { 5 };    // define variable width and initialize with initial value 5
        std::cout << width; // prints 5
    */

    /*
        int a;         // default-initialization (no initializer)

        // Traditional initialization forms:
        int b = 5;     // copy-initialization (initial value after equals sign)
        int c ( 6 );   // direct-initialization (initial value in parenthesis)

        // Modern initialization forms (preferred):
        int d { 7 };   // direct-list-initialization (initial value in braces)
        int e {};      // value-initialization (empty braces)
    */

    /*
        // An integer can only hold non-fractional values.
        // Initializing an int with fractional value 4.5 requires the compiler to convert 4.5 to a value an int can hold.
        // Such a conversion is a narrowing conversion, since the fractional part of the value will be lost.

        int w1 { 4.5 }; // compile error: list-init does not allow narrowing conversion

        int w2 = 4.5;   // compiles: w2 copy-initialized to value 4
        int w3 (4.5);   // compiles: w3 direct-initialized to value 4
    */

    /*
        int width {}; // value-initialization / zero-initialization to value 0
    */  

    /*
        // Use direct-list-initialization when you’re actually using the initial value:
        int x { 0 };    // direct-list-initialization with initial value 0
        std::cout << x; // we're using that 0 value here

        // Use value-initialization when the object’s value is temporary and will be replaced:
        int x {};      // value initialization
        std::cin >> x; // we're immediately replacing that value so an explicit 0 would be meaningless
    */

    /*
        int a, b; // create variables a and b, but do not initialize them

        int a = 5, b = 6;          // copy-initialization
        int c ( 7 ), d ( 8 );      // direct-initialization
        int e { 9 }, f { 10 };     // direct-list-initialization
        int i {}, j {};            // value-initialization
    */

    /*
        int a, b = 5;     // wrong: a is not initialized to 5!
        int a = 5, b = 5; // correct: a and b are initialized to 5

        int a = 4, b = 5; // correct: a and b both have initializers
        int a, b = 5;     // wrong: a doesn't have its own initializer
    */

    /*
        [[maybe_unused]] double pi { 3.14159 };  // Don't complain if pi is unused
        [[maybe_unused]] double gravity { 9.8 }; // Don't complain if gravity is unused
        [[maybe_unused]] double phi { 1.61803 }; // Don't complain if phi is unused

        std::cout << pi << '\n';
        std::cout << phi << '\n';

        // The compiler will no longer warn about gravity not being used
    */

	return 0;
}
