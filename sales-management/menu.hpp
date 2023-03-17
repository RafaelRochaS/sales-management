#ifndef MENUHEADERDEF
#define MENUHEADERDEF

#include <string>

#include "./authEnum.cpp"

class Menu {
  private:
    std::string menu;
    Authorization auth;

  public:
    Menu(Authorization);
    std::string ShowMenu();
    void HandleSelection();
};

#endif