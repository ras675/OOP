#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string name;
    string mobility;
    string color;
    double weight;
    string sound;

public:
    Animal(string name,string mobility,string color,double weight,string sound)
        : name(name), mobility(mobility), color(color), weight(weight), sound(sound) {} // Initialize sound

    virtual void displayInfo() {
        cout << "Type: " << name <<endl;
    }

    virtual void animalDetails() {
        cout << "Mobility: " << mobility << endl;
        cout << "Color: " << color << endl;
        cout << "Weight: " << weight << "kg" << endl;
        cout << "Sound: " << sound << endl;
    }
};

class Mammal : public Animal {
public:
    Mammal(string name,string mobility,string color,double weight,string sound)
        : Animal(name, mobility, color, weight, sound) {}

    void displayInfo(){
        cout << "Type: " << name << endl;
        animalDetails();
    }
};

class Bird : public Animal {
public:
    Bird(string name,string mobility,string color,double weight,string sound)
        : Animal(name, mobility, color, weight, sound) {}

    void displayInfo(){
        cout << "Type: " << name << endl;
        animalDetails();
    }
};

class Fish : public Animal {
public:
    Fish(string name,string mobility,string color,double weight,string sound)
        : Animal(name, mobility, color, weight, sound) {}

    void displayInfo(){
        cout << "Type: " << name << endl;
        animalDetails();
    }
};

class Reptile : public Animal {
public:
    Reptile(string name,string mobility,string color,double weight,string sound)
        : Animal(name, mobility, color, weight, sound) {}

    void displayInfo() {
        cout << "Type: " << name << endl;
        animalDetails();
    }
};

void Details(Animal &a)
{
    a.animalDetails();
}


int main() {
    Mammal dog("Dog", "Walking", "Brown", 50.0, "Bark");

    dog.displayInfo();

    return 0;
}
