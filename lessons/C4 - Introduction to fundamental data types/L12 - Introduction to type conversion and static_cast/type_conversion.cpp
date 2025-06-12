#include <cstdint>
#include <iostream>

void print(int x) {
  std::cout << x << '\n';
}

int main() {
  // Implicit type conversion (type narrowing)
  double d{5};  // okay: int to double is safe
  int x{5.5};   // error: double to int not safe

  // Explicit type conversion static_cast (const_cast and reinterpret_cast)
  print(
      static_cast<int>(5.5));  // explicitly convert double value 5.5 to an int

  char ch{97};  // 97 is ASCII code for 'a'
  // print value of variable ch as an int
  std::cout << ch << " has value " << static_cast<int>(ch) << '\n';

  int s{-1};
  std::cout << static_cast<unsigned int>(s) << '\n';  // prints 4294967295

  unsigned int u{4294967295};  // largest 32-bit unsigned int
  std::cout << static_cast<int>(u)
            << '\n';  // implementation-defined prior to C++20, -1 as of C++20

  // std::int8_t and std::uint8_t behave like chars
  std::int8_t myInt{65};       // initialize myInt with value 65
  std::cout << myInt << '\n';  // you're probably expecting this to print 65
  std::cout << static_cast<int>(myInt) << '\n';  // will always print 65

  return 0;
}
