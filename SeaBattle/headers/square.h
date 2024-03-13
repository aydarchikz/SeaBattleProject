#pragma once
#include "ship.h"
#include "field.h"

class Field;
class IShip;

struct Square {
  int is_ship = 0;
  bool is_shot = false;
  std::shared_ptr<IShip> ship;
  std::shared_ptr<Field> field;
  explicit Square() = default;
  bool IsAvailable();
};

bool Square::IsAvailable() {
  if (is_ship == 1 || )
}
