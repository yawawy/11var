// monster.h
#ifndef MONSTER_H
#define MONSTER_H

#include "hero.h"

class Monster : public Hero {
public:
    Monster(); // конструктор без параметров
    Monster(const std::string& name, const std::string& description); // конструктор с параметрами
    Monster(const Monster& other); // конструктор копирования
    ~Monster(); // деструктор

    // методы get и set для своих характеристик
    std::string getDescription() const;
    void setDescription(const std::string& description);

    // переопределенный метод
    void displayInfo() override;

private:
    std::string description;
};

#endif // MONSTER_H