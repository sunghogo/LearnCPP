/*
Best practice

Avoid #including .cpp files.
*/

/*
Rule

Use double quotes to include header files that you’ve written or are expected to be found in the current directory. Use angled brackets to include headers that come with your compiler, OS, or third-party libraries you’ve installed elsewhere on your system

Best practice

Use the standard library header files without the .h extension. User-defined headers should still use a .h extension.
*/

#include "add.h"
#include <iostream>

int main()
{
    std::cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';
    return 0;
}
