#include <iostream>

using namespace std;

class Dog {
    public:
    // string mName;
    string mBarkType;

    Dog(string name, string barkType) {
        this->mName = name;
        this->mBarkType = barkType;
    }

    void bark() {
        cout << mName << " says " << mBarkType << "!" << endl;
    }

    string getName() {
        return mName;
    }

    void setName(string name) {
        this->mName = name;
    }


    private:
    string mName;
};

int main() {
    Dog myDog("Buddy", "Woof");
    // cout << "My dog's name is: " << myDog.mName << endl;
    cout << "My dog's name is: " << myDog.getName() << endl;
    Dog anotherDog("Rex", "Bark");
    // cout << "Another dog's name is: " << anotherDog.mName << endl;
    cout << "Another dog's name is: " << anotherDog.getName() << endl;
    myDog.setName("Max");
    cout << "My dog's new name is: " << myDog.getName() << endl;
    myDog.bark();
    anotherDog.bark();
    return 0;
}
