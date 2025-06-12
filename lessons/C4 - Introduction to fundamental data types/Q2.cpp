#include <iostream>

int main() {
  double a, b, c;
  char op;

  std::cout << "Enter a double value: ";
  std::cin >> a;
  std::cout << "\nEnter a double value: ";
  std::cin >> b;
  std::cout << "\nEnter +, -, *, or /: ";
  std::cin >> op;

  switch (op) {
    case '+':
      c = a + b;
      break;
    case '-':
      c = a - b;
      break;
    case '*':
      c = a * b;
      break;
    case '/':
      c = a / b;
      break;
    default:
      c = 0;
  }

  std::cout << '\n' << a << ' ' << op << ' ' << b << " is " << c << std::endl;

  return 0;
}
