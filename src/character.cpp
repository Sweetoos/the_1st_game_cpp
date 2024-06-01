#include "character.hpp"

int Character::next_id_ = 1;

Character::Character() : id_(next_id_++) {}

void Character::set_name(const std::string &name)
{
    name_ = name;
}

int Character::get_id() const
{
    return id_;
}

std::string Character::get_name() const
{
    return name_;
}

void Character::set_attack_damage(int ad)
{
    ad_ = ad;
}

int Character::get_attack_damage() const
{
    return ad_;
}

void Character::greet(const Entity &entity) const
{
    std::cout << "Hello " << entity.get_name() << " and my ID is: " << id_ << std::endl;
}
