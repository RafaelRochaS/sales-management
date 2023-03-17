#include <string>
#include <iostream>
#include "menu.hpp"
#include "./authEnum.cpp"

const std::string basicMenu = "1 - Authenticate\n";
const std::string finalMenu = "0 - Exit\n";

Menu::Menu (Authorization auth) {
  std::cout << "[DEBUG] Chosen auth level: " + auth << std::endl;
  menu += basicMenu;
  menu += finalMenu;
}

std::string Menu::ShowMenu () {
  return menu;
}

void Menu::HandleSelection () {
  int selection;

  std::cout << "Choose an option." << std::endl;
  std::cin >> selection;

  if (selection == 0) {
    std::cout << "Exiting..." << std::endl;
    exit(0);
  }
}