#include "../headers/player.h"

void Player::Registration() {
  system("clear");
  std::cout << "Введите ваше имя.\n";
  std::cin >> name;
  system("clear");
  std::cout << "Введите пароль для подтверждения хода.\n";
  std::cin >> password;
  system("clear");
  for (int i = 0; i < 4; ++i) {
    fleet[0].push_back(std::shared_ptr<IShip>(new SingleDeckShip(field.field)));
  }
}
