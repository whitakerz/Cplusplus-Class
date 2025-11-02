#include <iostream>
using namespace std;

class Animal {
public:
    // Constructor
    Animal() {
        cout << "Animal created" << endl;
        mName = "Unknown";
        mAge = 0;
        mWeight = 0.0;
    }

    // Destructor
    virtual ~Animal() {
        cout << "Animal destroyed" << endl;
    }

    // Getters and setters
    const std::string& GetName() const { return mName; }
    void SetName(const std::string& name) { mName = name; }

    int GetAge() const { return mAge; }
    void SetAge(int age) { mAge = age; }

    double GetWeight() const { return mWeight; }
    void SetWeight(double weight) { mWeight = weight; }

    // Actions
    void Feed(int amount) {
        mWeight += amount * 0.5; // half the food becomes weight
    }

    void Sleep(int time) {
        mWeight -= time * 0.1; // loses a little weight while sleeping
    }

    void Pet() {
        cout << mName << " is happy!" << endl;
    }

private:
    std::string mName;
    int mAge;
    double mWeight;
};

// External function that uses pointer to modify Animal
void feedAnimal(Animal* animal) {
    animal->SetWeight(animal->GetWeight() + 5);
}

void celebrateBirthday(Animal* animal) {
    animal->SetAge(animal->GetAge() + 1);
    cout << "Happy birthday, " << animal->GetName()
         << "! You are now " << animal->GetAge() << "." << endl;
}

int main() {
    Animal* firstAnimal = new Animal();  // allocate dynamically

    firstAnimal->SetName("Doug");
    firstAnimal->SetAge(4);
    firstAnimal->SetWeight(100);

    Animal* animals[3];

    animals[0] = new Animal();
    animals[1] = new Animal();
    animals[2] = new Animal();

    animals[0]->SetName("Dog");
    animals[1]->SetName("Cat");
    animals[2]->SetName("Bird");

    for (int i = 0; i < 3; ++i) {
        cout << animals[i]->GetName() << endl;
    }

    delete firstAnimal; // calls destructor
    firstAnimal = nullptr; // good hygiene
    for (int i = 0; i < 3; ++i) {
        delete animals[i];
        animals[i] = nullptr;
    }
    return 0;
}
