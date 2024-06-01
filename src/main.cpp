#include <iostream>
#include "main.hpp"
#include <memory>

int main()
{
    Character andrzej;
    andrzej.set_name("Andrzej");
    andrzej.greet(andrzej);
    
    Human piotr;
    piotr.set_name("Piotr");
    piotr.greet(piotr);

    Character *maciek = new Human;
    maciek->set_name("Maciek");
    maciek->greet(*maciek);
    delete maciek;

    std::unique_ptr<Entity> kuba = std::make_unique<Human>();
    kuba->set_name("Kuba");
    kuba->greet(*kuba);
}