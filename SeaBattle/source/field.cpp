#include "../headers/field.h"

Field::Field() : field(10) {
  for (size_t i = 0; i < 10; ++i) {
    field[i] = std::vector<std::shared_ptr<Square>>(10);
    for (size_t j = 0; j < 10; ++j) {
      field[i][j] = std::shared_ptr<Square>(new Square());
    }
  }
}

std::vector<std::shared_ptr<Square>> Field::operator[](size_t ind){
  return field[ind];
}
