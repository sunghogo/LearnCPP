#include <iostream>

int main() {
  /* Literals */
  std::cout << 5 << '\n';   // 5 (no suffix) is type int (by default)
  std::cout << 5L << '\n';  // 5L is type long
  std::cout << 5u << '\n';  // 5u is type unsigned int

  int a{5};  // ok: types match
  unsigned int b{
      6};     // ok: compiler will convert int value 6 to unsigned int value 6
  long c{7};  // ok: compiler will convert int value 7 to long value 7

  std::cout << 5.0 << '\n';   // 5.0 (no suffix) is type double (by default)
  std::cout << 5.0f << '\n';  // 5.0f is type float

  float f{4.1f};  // use 'f' suffix so the literal is a float and matches
                  // variable type of float
  double d{4.1};  // change variable to type double so it matches the literal
  // type double

  double avogadro{
      6.02e23};  // 6.02 x 10^23 is a double literal in scientific notation
  double protonCharge{1.6e-19};  // charge on a proton is 1.6 x 10^-19

  /* Magic numbers */
  //   A magic number is a literal (usually a number) that either has an unclear
  //   meaning or may need to be changed later.
  return 0;
}
