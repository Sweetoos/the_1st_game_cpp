#include "human.hpp"



void Human::set_name(const std::string &name)
{
    name_ = name;
}

std::string Human::get_name() const
{
    return name_;
}

void Human::set_attack_damage(int ad)
{
    ad_ = ad;
}

int Human::get_attack_damage() const
{
    return ad_;
}

Human::Human() : Character() {}

void Human::greet(const Entity &entity) const
{
    std::cout << "Hello " << entity.get_name() << " and my ID is " << get_id() << std::endl;
}
