#include "elf.hpp"

Elf::Elf() : Character(0, "", 0, 1, 0)
{
    std::cout << "there is a problem bruh" << std::endl;
}

Elf::Elf(int id, const std::string &name, int ad, int level, int exp) : Character(id, name, ad, level, exp)
// needed to call Character constructor to make Human constructor, because Character doesnt have default constructor
{
}