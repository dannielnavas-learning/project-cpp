#include <iostream>

using namespace std;

class Cat {
    public:
    string name;

    Cat() {
        name = "Unnamed Cat";
    }

    Cat(string iName)
    {
        name = iName;
    }

    void meow() {
        cout << name << " says Meow!" << endl;
    }
};

int main() {
    Cat myCat;
    cout << "My cat's name is: " << myCat.name << endl;
    Cat anotherCat("Dante");
    cout << "Another cat's name is: " << anotherCat.name << endl;
    myCat.meow();
    anotherCat.meow();
    return 0;
}
