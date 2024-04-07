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
    fleet[0].push_back(std::shared_ptr<IShip>(new SingleDeckShip(field)));
  }
  for (int i = 0; i < 3; ++i) {
    fleet[1].push_back(std::shared_ptr<IShip>(new DoubleDeckShip(field)));
  }
  for (int i = 0; i < 2; ++i) {
    fleet[2].push_back(std::shared_ptr<IShip>(new ThreeDeckShip(field)));
  }
  fleet[3].push_back(std::shared_ptr<IShip>(new FourDeckShip(field)));
}

bool Player::IsLose() {
  return fleet.IsKilled(field);
}

bool Player::Move(Player& other) {
  return false;
}
