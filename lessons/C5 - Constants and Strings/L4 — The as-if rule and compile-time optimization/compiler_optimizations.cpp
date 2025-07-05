/* Compile-time evaluation */
#include <iostream>

int five() {
  return 5;
}

int pass(const int x)  // x is a runtime constant
{
  return x;
}

int main() {
  /* Constant folding */
  //   int x{3 + 4};
  int x{7};
  std::cout << 3 + 4 << '\n';

  /* Constant propagation */
  int x{7};
  //   std::cout << x << '\n';
  std::cout << 7 << '\n';

  /* Dead code elimination */
  //   int x{7};
  std::cout << 7 << '\n';

  /* Const variables are easier to optimize */
  const int x{7};  // x is now const
  std::cout << x << '\n';
  return 0;

  /* Nomenclature: Compile-time constants vs runtime constants */
  // The following are non-constants:
  [[maybe_unused]] int a{5};

  // The following are compile-time constants:
  [[maybe_unused]] const int b{5};
  [[maybe_unused]] const double c{1.2};
  [[maybe_unused]] const int d{b};  // b is a compile-time constant

  // The following are runtime constants:
  [[maybe_unused]] const int e{a};  // a is non-const
  [[maybe_unused]] const int f{e};  // e is a runtime constant
  [[maybe_unused]] const int g{
      five()};  // return value isn't known until runtime
  [[maybe_unused]] const int h{
      pass(5)};  // return value isn't known until runtime
}
