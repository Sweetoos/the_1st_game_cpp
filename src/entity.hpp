#pragma once
#include <string>

class Entity
{
public:
    virtual void set_name(const std::string &name) = 0;
    virtual void set_id(int &id) = 0;

    virtual std::string get_name() const = 0;
    virtual int get_id() const = 0;
};

//every entity should have name and id