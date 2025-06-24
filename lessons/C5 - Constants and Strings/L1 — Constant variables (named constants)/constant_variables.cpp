#include <iostream>

/* const and volatile are (type) qualifiers/cv-qualifiers */
/* Const function parameters */
void printInt(
    const int x) {  // Normally do not use const for pass by value parameters
  std::cout << x << '\n';
}

/* Const return values */
const int getValue() {  // Normally do not use const for returning by value
  return 5;
}

int main() {
  /* Declaring a const variable */
  //   const double gravity;  // error: const variables must be initialized
  //   gravity = 9.9;         // error: const variables can not be changed

  /* Const variables must be initialized */
  //   std::cout << "Enter your age: ";
  //   int age{};
  //   std::cin >> age;

  //   const int constAge{age};  // initialize const variable using non-const
  //   value

  //   age = 5;       // ok: age is non-const, so we can change its value
  //   constAge = 6;  // error: constAge is const, so we cannot change its value
  return 0;
}
