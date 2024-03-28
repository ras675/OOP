#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string name;
    string mobility;
    string color;
    double weight;

public:
    Animal(string name, string mobility,string color,double weight)
        : name(name), mobility(mobility), color(color), weight(weight) {}

    virtual void displayInfo() {
        cout << "Type: " << name <<endl;
    }

    virtual void animalDetails() {
        cout << "Mobility: " << mobility <<endl;
        cout << "Color: " << color <<endl;
        cout << "Weight: " << weight << "kg" <<endl;
    }
};

class Mammal : public Animal {
public:
    Mammal(string name,string mobility,string color,double weight)
        : Animal(name, mobility, color, weight) {}

    void displayInfo() {
        cout << "Type: " << name <<endl;
        animalDetails();
    }
};

class Bird : public Animal {
public:
    Bird(string name,string mobility,string color,double weight)
        : Animal(name, mobility, color, weight) {}

    void displayInfo(){
        cout << "Type: " << name <<endl;
        animalDetails();
    }
};

class Fish : public Animal {
public:
    Fish(string name,string mobility,string color,double weight)
        : Animal(name, mobility, color, weight) {}

    void displayInfo() {
        cout << "Type: " << name << endl;
        animalDetails();
    }
};

class Reptile : public Animal {
public:
    Reptile(string name,string mobility,string color,double weight)
        : Animal(name, mobility, color, weight) {}

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
    Mammal dog("Dog", "Walking", "Brown", 50.0);

    dog.displayInfo();

    return 0;
}


