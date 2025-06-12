#include <cstddef>  // for std::size_t
#include <cstdint>  // for fixed-width integers
#include <iostream>

int main() {
  std::int32_t x{32767};  // x is always a 32-bit integer
  x = x + 1;              // so 32768 will always fit
  std::cout << x << '\n';

  std::int8_t y{65};       // initialize 8-bit integral type with value 65
  std::cout << y << '\n';  // You're probably expecting this to print 65

  // for fast and least types
  std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
  std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
  std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
  std::cout << '\n';
  std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
  std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
  std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";

  int z{5};
  std::size_t s{sizeof(z)};  // sizeof returns a value of type std::size_t, so
                             // that should be the type of s
  std::cout << s << '\n';

  return 0;
}
