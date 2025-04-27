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

void Game::Play() {
  std::cout << "Для начала игры нажмите Enter\n";
  for (char c; c != '\n'; c = getchar());
  system("clear");
  bool player1_turn = true;
  while (!player1.IsLose() && !player2.IsLose()) {
    if (player1_turn) {
      if (!player1.Move(player2)) {
        player1_turn = false;
      }
    } else {
      if (!player2.Move(player1)) {
        player1_turn = true;
      }
    }
  }
}