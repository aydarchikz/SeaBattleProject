#include "../headers/factory.h"

bool CorrectInput(std::string input) {
  if (input.size() < 2 || input.size() > 3 || input[0] - 'A' > 9 || 'A' - input[0] > 0 || !isdigit(input[1]) ||
      (input.size() == 3 && input[1] != '1' && input[2] != '0')) {
    return false;
  }
  return true;
}

bool IsAvailable(std::pair<int, int> coordinates, std::vector<std::vector<std::shared_ptr<Square>>>& field) {
  for (int i = coordinates.first - 1; i <= coordinates.first + 1; ++i) {
    for (int j = coordinates.second - 1; j <= coordinates.second + 1; ++j) {
      if (i >= 0 && i < 10 && j >= 0 && j < 10 && (*field[i][j]).is_ship != 0) {
        return false;
      }
    }
  }
  return true;
}

void ShipCreator::FactoryMethod(int count_deck, IShip* ship, std::vector<std::vector<std::shared_ptr<Square>>>& field) {
  std::cout << "Введите координаты однопалубного корабля. Необходимый формат: [A-J][1-10]\n";
  std::string input;
  std::cin >> input;
  std::pair<int, int> coordinates;
  while (true) {
    if (CorrectInput(input)) {
      coordinates.first = input[0] - 'A';
      coordinates.second = (input.size() == 3 ? 9 : input[1] - '1');
    } else {
      while (getchar() != '\n');
      std::cout << "Некорректный формат ввода! Необходимый формат: [A-J][1-10]\n";
      std::cin >> input;
      continue;
    }
    if (IsAvailable(coordinates, field)) {
      break;
    }
    while (getchar() != '\n');
    std::cout << "Выбранное поле недоступно для размещения корабля! Введите другие координаты.\n";
    std::cin >> input;
    continue;
  }
  while (getchar() != '\n');
  (*ship).ship.push_back(field[coordinates.first][coordinates.second]);
  (*field[coordinates.first][coordinates.second]).is_ship = 1;
  std::cout << "Корабль успешно создан! Для продолжения нажмите Enter\n";
  for (char c; c != '\n'; c = getchar());
  system("clear");
}
