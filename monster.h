// monster.h
#ifndef MONSTER_H
#define MONSTER_H

#include "hero.h"

class Monster : public Hero {
public:
    Monster(); // ����������� ��� ����������
    Monster(const std::string& name, const std::string& description); // ����������� � �����������
    Monster(const Monster& other); // ����������� �����������
    ~Monster(); // ����������

    // ������ get � set ��� ����� �������������
    std::string getDescription() const;
    void setDescription(const std::string& description);

    // ���������������� �����
    void displayInfo() override;

private:
    std::string description;
};

#endif // MONSTER_H