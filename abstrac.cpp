#include <iostream>

using namespace std;

class Human {
    public:
    Human(int spawnAge) {
        age = spawnAge;
    }

    void Think() {
        cout <<  GetThinkingMessage() << endl;
    }
    int age;

    private:
    int socialLevel;
    int intelligence;
    int luck;

    string GetThinkingMessage() {
        if(socialLevel + luck > 100) {
            return "I am thinking positively!";
        } else if (luck > intelligence) {
            return "I am thinking cautiously.";
        } else if (age > 18) {
            return "I am thinking maturely.";
        }
        return "I am thinking normally.";
    }
};

int main() {
    Human person(36);
    person.Think();
    return 0;
}
