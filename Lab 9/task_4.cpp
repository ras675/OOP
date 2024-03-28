#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Animals {
public:
    Animals(std::string name, std::string sound) : name(name), sound(sound) {}

    std::string getName() const {

        return name;

    }



    std::string getSound() const {

        return sound;

    }



    virtual std::string getWeight() const {

        return ""; // Base class implementation, overridden in derived classes

    }



private:

    std::string name;

    std::string sound;

};



class Mammals : public Animals {

public:

    Mammals(std::string name, std::string type, std::string mobility, std::string color, std::string weight, std::string sound)

        : Animals(name, sound), type(type), mobility(mobility), color(color), weight(weight) {}



    std::string getWeight() const override {

        return weight;

    }



    void animalDetails() const {

        std::cout << "Type: " << getName() << std::endl;

        std::cout << "Mobility: " << mobility << std::endl;

        std::cout << "Color: " << color << std::endl;

        std::cout << "Weight: " << weight << "kg" << std::endl;

        std::cout << "Sound: " << getSound() << std::endl;

    }



private:

    std::string type;

    std::string mobility;

    std::string color;

    std::string weight;

};



// Function to sort Animals array based on weight in descending order

void sortAnimalWeight(Animals** animalsArray, int n) {

    std::sort(animalsArray, animalsArray + n, [](Animals* a, Animals* b) {

        return std::stoi(a->getWeight()) > std::stoi(b->getWeight());

    });

}



int main() {

    std::vector<Animals*> animalsList;



    // Creating objects for Mammals category

    for (int i = 0; i < 2; ++i) {

        animalsList.push_back(new Mammals("Dog", "Canine", "Walking", "Brown", "50", "Bark"));

        animalsList.push_back(new Mammals("Cat", "Feline", "Walking", "Gray", "5", "Meow"));

    }



    // Sort animals based on weight in descending order

    sortAnimalWeight(animalsList.data(), animalsList.size());



    // Print animal details after sorting

    for (const auto& animal : animalsList) {

        Mammals* mammal = dynamic_cast<Mammals*>(animal);

        if (mammal) {

            mammal->animalDetails();

        }

    }



    // Clean up the memory

    for (const auto& animal : animalsList) {

        delete animal;

    }



    return 0;

}
