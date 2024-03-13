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

  explicit Player(std::string name_, std::string password_, Field field_, Fleet fleet_)
  : name(std::move(name_))
  , password(std::move(password_))
  , field(std::move(field_))
  , fleet(std::move(fleet_)) {}

  void Registration();
};
