#include "../headers/iship.h"

IShip::~IShip() = default;

bool IShip::IsKilled(Field &field) {
  for (size_t i = 0; i < ship.size(); ++i) {
    if (!ship[i]->is_shot) {
      return false;
    }
  }
  return true;
}
