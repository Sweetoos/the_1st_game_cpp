#include "human.hpp"



Human::Human(int &id, std::string &name, int &ad, int &level, int &exp):
    id_(id),
    name_(name),
    attack_damage_(ad),
    character_level_(level),
    character_experience_(exp)
{
}
