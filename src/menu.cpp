#include "main.hpp"
#include <iostream>

void Menu::display_menu()
{
}

void Menu::display_admin_menu()
{
}

void Menu::greet_character(Character *character)
{
    std::cout << "Hello entity " << character->get_id() << " named " << character->get_name() << "." << std::endl;
}
