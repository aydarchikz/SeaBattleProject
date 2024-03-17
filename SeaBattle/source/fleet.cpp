#include "../headers/fleet.h"

std::vector<std::shared_ptr<IShip>> Fleet::operator[](size_t ind) {
  return fleet[ind];
}

Fleet::Fleet() : fleet(4) {}
