#include "../headers/field.h"

Field::Field() : field(10) {
  for (size_t i = 0; i < 10; ++i) {
    field[i] = std::vector<Square>(10);
    for (int j = 0; j < 10; ++j) {
      field[i][j].field = std::shared_ptr<Field>(this);
    }
  }
}

std::vector<Square> Field::operator[](size_t ind) const {
  return field[ind];
}
