#include "character.hpp"

int Character::next_id_ = 1;



Character::Character(int id, const std::string &name, int ad, int level, int exp) : 
    id_(id),
    name_(name),
    attack_damage_(ad),
    character_level_(level),
    character_experience_(exp)
{
}
