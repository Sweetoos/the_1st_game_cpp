#pragma once
#include <string>
#include <iostream>

class Entity
{
public:
    virtual void set_name(const std::string &name) = 0;
    virtual void set_attack_damage(int ad) = 0;

    virtual std::string get_name() const = 0;
    virtual int get_attack_damage() const = 0;
    virtual void greet(const Entity &entity) const = 0;
    virtual int get_id() const = 0;
};

class Character : public Entity
{
private:
    static int next_id_;
    int id_;
    std::string name_;
    int ad_;

public:
    Character();
    void greet(const Entity &entity) const override;

    // Setters
    void set_name(const std::string &name) override;
    void set_attack_damage(int ad) override;
    // Getters
    int get_id() const override;
    std::string get_name() const override;
    int get_attack_damage() const override;
};