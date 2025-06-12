#include <iomanip>  // for output manipulator std::setprecision()
#include <iostream>
#include <limits>

int main() {
  std::cout
      << std::boolalpha;  // print bool as true or false rather than 1 or 0
  std::cout << "float: " << std::numeric_limits<float>::is_iec559 << '\n';
  std::cout << "double: " << std::numeric_limits<double>::is_iec559 << '\n';
  std::cout << "long double: " << std::numeric_limits<long double>::is_iec559
            << '\n';

  // Printing floating point numbers
  std::cout << 5.0 << '\n';
  std::cout << 6.7f << '\n';
  std::cout << 9876543.21 << '\n';

  // Outputting floating point values
  std::cout << std::setprecision(17);  // show 17 digits of precision
  std::cout << 3.33333333333333333333333333333333333333f
            << '\n';  // f suffix means float
  std::cout << 3.33333333333333333333333333333333333333
            << '\n';  // no suffix means double

  // Rounding errors making floating point comparison tricky
  // floats: 7 significant digits of precision
  // double: 16 significant digits of precision
  double d1{1.0};
  std::cout << d1 << '\n';

  double d2{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 +
            0.1};  // should equal 1.0
  std::cout << d2 << '\n';

  // NaN and Inf (for floating points only)
  double zero{0.0};

  double posinf{5.0 / zero};  // positive infinity
  std::cout << posinf << '\n';

  double neginf{-5.0 / zero};  // negative infinity
  std::cout << neginf << '\n';

  double z1{0.0 / posinf};  // positive zero
  std::cout << z1 << '\n';

  double z2{-0.0 / posinf};  // negative zero
  std::cout << z2 << '\n';

  double nan{zero / zero};  // not a number (mathematically invalid)
  std::cout << nan << '\n';

  return 0;
}
