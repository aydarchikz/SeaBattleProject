#include "../headers/game.h"
#include <iostream>

void Game::RegistrationPlayers() {
  system("clear");
  std::cout << "Добро пожаловать в консольный Морской бой!\nНужно зарегистрировать игроков. Для начала регистрации"
               "первого игрока нажмите Enter.\n";
  for (char c; c != '\n'; c = getchar());
  player1.Registration();
  std::cout << "Первый игрок успешно зарегистрирован! Для регистрации второго игрока нажмите Enter\n";
  for (char c; c != '\n'; c = getchar());
  player2.Registration();
  std::cout << "Регистрация успешно завершена!\n";
}
