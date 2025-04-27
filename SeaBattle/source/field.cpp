#include "../headers/field.h"
#include <iostream>

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

void Field::Print(bool is_play = true) {
  std::cout << "   ";
  for (int i = 1; i <= 10; ++i) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  for (int i = 0; i < 10; ++i) {
    std::cout << static_cast<char>('A' + i) << " |";
    for (int j = 0; j < 10; ++j) {
      if (field[i][j]->is_shot) {
        if (field[i][j]->is_ship == 0) {
          std::cout << 'M';
        } else {
          std::cout << 'X';
        }
      } else if(is_play) {
        std::cout << ' ';
      } else {
        if (field[i][j]->is_ship == 0) {
          std::cout << ' ';
        } else {
          std::cout << 'K';
        }
      }
      std::cout << "|";
    }
    std::cout << std::endl;
  }
}
