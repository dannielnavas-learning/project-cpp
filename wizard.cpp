#include <iostream>

using namespace std;

class Wizard {
    private:

    public:
        int mana, hp, power;
        Wizard(int iMana, int iHp, int iPower)  {
            mana = iMana;
            hp = iHp;
            power = iPower;
        }
        void Spell() {
            if(mana >= 10) {
                mana -= 10;
                cout << "Casting a spell with power " << power << "!" << endl;
            } else {
                cout << "Not enough mana to cast a spell." << endl;
            }
        }
};

class IceWizard : public Wizard { // forma de herencia
    public:
        IceWizard(int iMana, int iHp, int iPower) : Wizard(iMana, iHp, iPower + 10) {
            mana = iMana;
            hp = iHp;
            power = iPower + 10;
        }

        void IceSpell() {
            if(mana >= 15) {
                mana -= 15;
                cout << "Casting an ice spell with power " << power << "!" << endl;
            } else {
                cout << "Not enough mana to cast an ice spell." << endl;
            }
        }
};

int main() {
    Wizard gandalf(100, 200, 50);
    gandalf.Spell();

    IceWizard elsa(100, 150, 40);
    elsa.IceSpell();

    return 0;
}
