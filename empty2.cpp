#include <iostream>

void cut_triangle(int level) {
// base case
  if (level == 0) {
    std::cout << "*\n";
    return;
    }
//	//recursive call
//  cut_triangle(level-1);

	//small calculation
  for (int i = 0; i < level; i++) {
    std::cout << "* ";
  }
  std::cout << std::endl;

	//recursive call
  cut_triangle(level-1);
}

int main() {
  int level;
  std::cout << "Enter the number of levels: ";
  std::cin >> level;

  cut_triangle(level);

  return 0;
}
