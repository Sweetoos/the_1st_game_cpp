#pragma once
#include "character.hpp"


class Human : public Character
{
private:
    std::string name_;
    int ad_;

public:
    Human();
    void greet(const Entity &entity) const override;

    // Setters
    void set_name(const std::string &name) override;
    void set_attack_damage(int ad) override;
    // Getters
    std::string get_name() const override;
    int get_attack_damage() const override;
};