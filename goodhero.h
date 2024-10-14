// goodhero.h
#ifndef GOODHERO_H
#define GOODHERO_H

#include "hero.h"

class GoodHero : public Hero {
public:
    GoodHero(); // конструктор без параметров
    GoodHero(const std::string& name, const std::string& weapon, const std::string& skills); // конструктор с параметрами
    GoodHero(const GoodHero& other); // конструктор копирования
    ~GoodHero(); // деструктор

    // методы get и set для своих характеристик
    std::string getVirtue() const;
    void setVirtue(const std::string& virtue);

    // переопределенный метод
    void displayInfo() override;
};

#endif
