#pragma once
#include <string>
#include "player.h"

class Game {
  Player player1;
  Player player2;

 public:
  void RegistrationPlayers();
  void Play();
};
