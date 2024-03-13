#include "../headers/fleet.h"

std::vector<IShip> Fleet::operator[](size_t ind) {
  return fleet[ind];
}

Fleet::Fleet() : fleet(4){}
