#include "../headers/ship.h"
#include <iostream>

SingleDeckShip::SingleDeckShip(const Field& field) {
  std::cout << "Введите координаты однопалубного корабля. Необходимый формат: [A-J][1-10]\n";
  std::string input;
  std::cin >> input;
  system("clear");
  std::pair<int, int> coordinates;
  while (true) {
    if (input.size() < 2 || input.size() > 3 || input[0] - 'A' > 9 || 'A' - input[0] > 0 || !isdigit(input[1]) ||
        (input.size() == 3 && input[1] == '1' && input[2] == '0')) {
      std::cout << "Некорректный формат ввода! Необходимый формат: [A-J][1-10]\n";
      std::cin >> input;
      continue;
    }
    coordinates.first = input[0] - 'A';
    coordinates.second = (input.size() == 3 ? 9 : input[1] - '1');
    if (field[coordinates.first][coordinates.second].)
  }
  std::cout << "Корабль успешно создан! Для продолжения нажмите Enter\n";
  for (char c; c != '\n'; c = getchar());
  system("clear");
}
