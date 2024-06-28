#pragma once
#include <string>
#include <iostream>
#include "entity.hpp"

class Character : public Entity
{
private:
    static int next_id_;
    int id_;
    std::string name_;
    double attack_damage_;
    int character_level_ = 1;
    int character_experience_ = 0.0;

public:
    Character();
    Character(int &id, std::string &name, int &ad, int &level, int &exp);

    // Setters
    void set_id(int &id) override { id_ = id; }
    void set_name(const std::string &name) override { name_ = name; }
    virtual void set_attack_damage(double &ad) { attack_damage_ = ad; }

    // Getters
    int get_id() const override { return id_; }
    std::string get_name() const override { return name_; }
    virtual double get_attack_damage() const { return attack_damage_; }
};
