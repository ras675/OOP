#include <iostream>
#include <string>
using namespace std;

class Animal {

protected:
    string name;
public:
    Animal(string name) : name(name) {}

    virtual void displayInfo() {
        cout<< "Animal Type: " << name<<endl;
    }
};

class Mammal : public Animal {
private:
    string species;
public:
    Mammal(string name,string species) : Animal(name), species(species) {}

    void displayInfo(){
        cout << "Mammal Type: " << name << ", Species: " << species <<endl;
    }
};

class Bird : public Animal {

private:
    string species;
public:
    Bird(string name,string species) : Animal(name), species(species) {}

    void displayInfo(){
        cout << "Bird Type: " << name << ", Species: " << species <<endl;
    }
};

class Fish : public Animal {

private:
    string species;
public:
    Fish(string name,string species) : Animal(name), species(species) {}

    void displayInfo() {
        cout << "Fish Type: " << name << ", Species: " << species <<endl;
    }
};

class Reptile : public Animal {

private:
    string species;
public:
    Reptile(string name,string species) : Animal(name), species(species) {}

    void displayInfo(){
        cout << "Reptile Type: " << name << ", Species: " << species <<endl;
    }
};

void whattype(Animal &a){
a.displayInfo();
}

int main() {
    int numAnimals = 8;
    Animal* animals[numAnimals];

    animals[0] = new Mammal("Dog", "Canine");
    animals[1] = new Mammal("Cat", "Feline");
    animals[2] = new Bird("Eagle", "Bird of Prey");
    animals[3] = new Bird("Penguin", "Flightless Bird");
    animals[4] = new Fish("Salmon", "Salmonidae");
    animals[5] = new Fish("Shark", "Elasmobranch");
    animals[6] = new Reptile("Snake", "Serpentes");
    animals[7] = new Reptile("Turtle", "Testudines");

    for (int i = 0; i < numAnimals; i++) {
        animals[i]->displayInfo();
    }

    for (int i = 0; i < numAnimals; i++) {
        delete animals[i];
    }

    return 0;
}
