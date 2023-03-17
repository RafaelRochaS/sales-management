#include <iostream>
#include <string>

#include "menu.hpp"
#include "authEnum.cpp"

int main() {
  std::cout << "Sales Management Software 1.0\nTesting exercise of a full project in C++!" << std::endl;

  Menu* menu = new Menu(Authorization::ADMIN);
  std::cout << menu->ShowMenu();
  menu->HandleSelection();
}