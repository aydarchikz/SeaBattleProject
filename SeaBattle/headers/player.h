#pragma once
#include <iostream>
#include "field.h"
#include "fleet.h"

struct Player {
  std::string name;
  std::string password;
  Field field;
  Fleet fleet;

  explicit Player() = default;
  void Registration();
  bool IsLose();
  bool Move(Player& other);
};
