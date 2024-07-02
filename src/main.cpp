#include <iostream>
#include "main.hpp"
#include <memory>

int main(int argc, char *argv[])
{
    std::shared_ptr<Character> human = std::make_shared<Human>(0, "Kacper", 95, 1, 0);
    std::shared_ptr<Character> elf = std::make_shared<Elf>(1, "Legolas", 95, 1, 0);
    Menu::greet_character(human.get());
    Menu::greet_character(elf.get());

}