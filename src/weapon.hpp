#pragma once
#include "entity.hpp"
#include <list>
#include <fstream>

class Weapon:public Entity 
{
private:
    static int next_id_;
    int id_;
    bool can_use_; // check if called race can use it
    double attack_damage_;
    double ad_buff_percentage_; // attack damage buff percentage
    std::string name_;
    int character_level_required_;
    // list of weapons, buffs,
    static std::list<Weapon> weapons_list_;
    static std::list<Weapon> weapons_effect_;

public:
    Weapon(int id, const std::string &name, double attack_damage);
    void add_weapon_to_list(const Weapon &weapon);

    void grant_effect_to_weapon(const Weapon &weapon);
    void save_weapons_to_file(const std::string file_name) const;
    static void read_weapons_from_file(const std::string file_name);
    bool can_use() const { return can_use_; }

    //Setters
    void set_id(int &id) override { this->id_ = id; }
    void set_name(const std::string &name) override { this->name_ = name; }
    virtual void set_attack_damage(double &attack_damage) { this->attack_damage_ = attack_damage; }

    //Getters
    int get_id() const { return id_; }
    std::string get_name() const { return name_; }
    double get_attack_damage() const { return attack_damage_; }
    int get_weapon_id() const { return id_; }
    double get_ad_buff_percentage() const { return ad_buff_percentage_; }
    const std::string get_weapon_name() const { return name_; }
    const std::list<Weapon> &get_weapons() const;
    const std::list<Weapon> &get_weapon_effects() const;
};