#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

class Weapon
{
public:
    virtual void NameWeapon() {
        cout << "You took the weapon.\n1: To fire a shot, press ENTER\n2: To reload, press space.\n";
    }

    virtual void Action1() {
        cout << "Bang...\n";
    }

    virtual void Action2() {
        cout << "Click click\n";
    }
};

//пистолет
class Gun : public Weapon {
public:

    void NameWeapon() override {
        cout << "You took the Gun.\n\n1: To fire a shot, press ENTER\n2: To reload, press space.\n";
    }

    void Action1() override {
        cout << "Bang...\n";
    }

    void Action2() override {
        cout << "chik...\n";
    }
};

//граната
class Grenade : public Weapon {
public:
    void NameWeapon() override {
        cout << "You took the Grenade.\n\n1: To throw, press SPACE\n2: To explode, press ENTER\n";
    }

    void Action1() override {
        cout << "Throwing grenade...\n";
    }

    void Action2() override {
        cout << "Kaboom!!!\n";
    }
};

//дробовик
class Shotgun : public Weapon {
public:
    void NameWeapon() override {
        cout << "You took the Shotgun.\n\n1: To fire a shot, press ENTER\n2: To reload, press space.\n";
    }

    void Action1() override {
        cout << "Bang...boom\n";
    }

    void Action2() override {
        cout << "Click click\n";
    }
};

//снайперская винтовка
class SniperRifle : public Weapon {
public:
    void NameWeapon() override {
        cout << "You took the SniperRifle.\n\n1: To fire a shot, press ENTER\n2: To reload, press space.\n";
    }

    void Action1() override {
        cout << "Zoom...bang\n";
    }

    void Action2() override {
        cout << "Click click\n";
    }
};

//пулемёт
class MachineGun : public Weapon {
public:
    void NameWeapon() override {
        cout << "You took the MachineGun.\n\n1: To fire a shot, press ENTER\n2: To reload, press space.\n";
    }

    void Action1() override {
        cout << "Rat-a-tat-tat...\n";
    }

    void Action2() override {
        cout << "Click click\n";
    }
};

//РПГ
class RPG : public Weapon {
public:
    void NameWeapon() override {
        cout << "You took the RPG.\n\n1: To fire a shot, press ENTER\n2: To reload, press space.\n";
    }

    void Action1() override {
        cout << "Boom!!!\n";
    }

    void Action2() override {
        cout << "Click click\n";
    }
};

//нож
class Knife : public Weapon {
public:
    void NameWeapon() override {
        cout << "You took the Knife.\n\n1: To stab, press ENTER\n2: To slash, press space.\n";
    }

    void Action1() override {
        cout << "Hsh hsh\n";
    }

    void Action2() override {
        cout << "Slashing...\n";
    }
};

class Player
{
public:
    void UseWeapon(Weapon* weapon)
    {
        weapon->NameWeapon();
        int code = _getch();
        if (code == 13)
            weapon->Action1();
        if (code == 32)
            weapon->Action2();
    }
};

int main()
{
    int numWeapons = 7;
    Weapon** weapons = new Weapon * [numWeapons];
    Player player;

    weapons[0] = new Gun;
    weapons[1] = new Grenade;
    weapons[2] = new Shotgun;
    weapons[3] = new SniperRifle;
    weapons[4] = new MachineGun;
    weapons[5] = new RPG;
    weapons[6] = new Knife;

    while (true)
    {
        int code = _getch();
        if (code == 48)
            player.UseWeapon(weapons[0]);
        if (code == 49)
            player.UseWeapon(weapons[1]);
        if (code == 50)
            player.UseWeapon(weapons[2]);
        if (code == 51)
            player.UseWeapon(weapons[3]);
        if (code == 52)
            player.UseWeapon(weapons[4]);
        if (code == 53)
            player.UseWeapon(weapons[5]);
        if (code == 54)
            player.UseWeapon(weapons[6]);
    }
}