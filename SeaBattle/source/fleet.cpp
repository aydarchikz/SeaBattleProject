#include "../headers/fleet.h"

std::vector<std::shared_ptr<IShip>> Fleet::operator[](size_t ind) {
  return fleet[ind];
}

Fleet::Fleet() : fleet(4) {}

bool Fleet::IsKilled(Field& field) {
  for (int i = 0; i < 4; ++i) {
    for (size_t j = 0; j < fleet[i].size(); ++j) {
      if (!fleet[i][j]->IsKilled(field)) {
        return false;
      }
    }
  }
  return true;
}
