#include <iomanip>
#include <iostream>

const double kGravity = 9.81;

int main() {
  double height, position;
  int time{0};
  std::cout << "Enter the height of the tower in meters: ";
  std::cin >> height;
  position = height;

  std::cout << std::fixed << std::setprecision(1);
  do {
    position = height - 0.5 * time * time * kGravity;
    if (position <= 0) {
      position = 0;
      std::cout << "At " << time << " seconds, the ball is on the ground."
                << std::endl;
      break;
    }
    std::cout << "At " << time
              << " seconds, the ball is at height: " << position << " meters\n";
    ++time;
  } while (position);
}
