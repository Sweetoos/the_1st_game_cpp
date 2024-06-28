#pragma once
#include "character.hpp"

class Human : public Character
{
private:
    std::string name_;
    double attack_damage_;
    int id_;
    int character_level_ = 1;
    int character_experience_ = 0.0;

public:
    Human(int &id, std::string &name, int &ad, int &level, int &exp);

    // Setters
    void set_id(int &id) override { this->id_ = id; }
    void set_name(const std::string &name) override { name_ = name; }
    void set_attack_damage(double &ad) override { attack_damage_ = ad; }
    // Getters
    std::string get_name() const override { return name_; }
    double get_attack_damage() const override { return attack_damage_; }
};