#include "io.h"

#include <iostream>

int read_number() {
  std::cout << "Enter number: ";
  int n{};
  std::cin >> n;
  return n;
}

void write_answer(int n) {
  std::cout << "The answer is: " << n << std::endl;
}
