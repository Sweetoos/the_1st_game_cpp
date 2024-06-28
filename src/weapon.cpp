#include "weapon.hpp"
#include <sstream>
#include <iostream>

int Weapon::next_id_ = 0;
std::list<Weapon> Weapon::weapons_list_;

Weapon::Weapon(int id, const std::string &name, double attack_damage)
    : id_(id), name_(name), attack_damage_(attack_damage), can_use_(true)
{
    next_id_ = std::max(next_id_, id + 1);
}

void Weapon::add_weapon_to_list(const Weapon &weapon)
{
    weapons_list_.push_back(*this);
}

const std::list<Weapon> &Weapon::get_weapons() const
{
    return weapons_list_;
}

const std::list<Weapon> &Weapon::get_weapon_effects() const
{
    return weapons_effect_;
}

void Weapon::save_weapons_to_file(const std::string file_name) const
{
    std::ofstream file(file_name);
    if (!file)
    {
        throw std::runtime_error("Unable to open file " + file_name + " to read");
    }
    for (auto &weapon : weapons_list_)
    {
        file << weapon.get_id() << "; "
             << weapon.get_name() << "; "
             << weapon.get_attack_damage() << std::endl;
    }
    file.close();
}



void Weapon::read_weapons_from_file(const std::string file_name)
{
    std::ifstream file(file_name);
    if (!file)
    {
        throw std::runtime_error("Unable to open file " + file_name + " to read");
    }

    std::string line;
    while (std::getline(file, line))
    {
        int weapon_id;
        std::string weapon_name;
        double attack_damage;
        char semicolon;

        std::istringstream iss(line);
        iss >> weapon_id >> semicolon;
        std::getline(iss, weapon_name, ';');
        iss >> attack_damage;

        Weapon weapon(weapon_id,weapon_name, attack_damage);
        weapons_list_.push_back(weapon);
    }
    file.close();
}
