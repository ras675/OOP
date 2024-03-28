#include <iostream>
#include <string>

using namespace std;

class Seat {
public:
    Seat() : comfortability("Pleasant"), seatWarmer(false) {}

    Seat(const string& comfort, bool hasWarmer) : comfortability(comfort), seatWarmer(hasWarmer) {}


    string getComfortability() const {
        return comfortability;
    }

    bool hasSeatWarmer() const {
        return seatWarmer;
    }


    void setComfortability(const string& comfort) {
        comfortability = comfort;
    }

    void setSeatWarmer(bool hasWarmer) {
        seatWarmer = hasWarmer;
    }

private:
    string comfortability;
    bool seatWarmer;
};

class Wheel {
public:
    Wheel() : circumference(18.0) {}

    Wheel(double circ) : circumference(circ) {}


    double getCircumference() const {
        return circumference;
    }


    void setCircumference(double circ) {
        circumference = circ;
    }

private:
    double circumference;
};

class Engine {
public:
    Engine() : maxFuelConsumptionRate(10.0), maxEnergyProductionRate(300.0), averageRPM(2000) {}

    Engine(double fuelConsumptionRate, double energyProductionRate, int rpm)
        : maxFuelConsumptionRate(fuelConsumptionRate), maxEnergyProductionRate(energyProductionRate), averageRPM(rpm) {}


    double getMaxFuelConsumptionRate() const {
        return maxFuelConsumptionRate;
    }

    double getMaxEnergyProductionRate() const {
        return maxEnergyProductionRate;
    }

    int getAverageRPM() const {
        return averageRPM;
    }

    void setMaxFuelConsumptionRate(double fuelConsumptionRate) {
        maxFuelConsumptionRate = fuelConsumptionRate;
    }

    void setMaxEnergyProductionRate(double energyProductionRate) {
        maxEnergyProductionRate = energyProductionRate;
    }

    void setAverageRPM(int rpm) {
        averageRPM = rpm;
    }

private:
    double maxFuelConsumptionRate;
    double maxEnergyProductionRate;
    int averageRPM;
};

class Door {
public:
    Door() : openingMode("sideways") {}

    Door(const string& mode) : openingMode(mode) {}


    string getOpeningMode() const {
        return openingMode;
    }


    void setOpeningMode(const string& mode) {
        openingMode = mode;
    }

private:
    string openingMode;
};

class Car {
private:
    Seat seats;
    Wheel wheels;
    Engine engine;
    Door doors;
    double maxAcceleration;
    double fuelCapacity;
public:
    Car() : maxAcceleration(10.0), fuelCapacity(60.0) {}

    Car(double acceleration, double capacity) : maxAcceleration(acceleration), fuelCapacity(capacity) {}


    double getMaxAcceleration() const {
        return maxAcceleration;
    }

    double getFuelCapacity() const {
        return fuelCapacity;
    }


    void setMaxAcceleration(double acceleration) {
        maxAcceleration = acceleration;
    }

    void setFuelCapacity(double capacity) {
        fuelCapacity = capacity;
    }

    void displaySpecifications() const {
        cout << "Car Specifications:" <<endl;
        cout << "Seats: Comfortability - " << seats.getComfortability() << ", Seat Warmer - "
                  << (seats.hasSeatWarmer() ? "Yes" : "No") <<endl;
        cout << "Wheels: Circumference - " << wheels.getCircumference() << " inches" <<endl;
        cout << "Engine: Max Fuel Consumption Rate - " << engine.getMaxFuelConsumptionRate() << " gal/hour, "
                  << "Max Energy Production Rate - " << engine.getMaxEnergyProductionRate() << " kW, "
                  << "Average RPM - " << engine.getAverageRPM() << " RPM" <<endl;
        cout << "Doors: Opening Mode - " << doors.getOpeningMode() <<endl;
        cout << "Maximum Acceleration: " << maxAcceleration << " m/s^2" <<endl;
        cout << "Fuel Capacity: " << fuelCapacity << " gallons" <<endl;
    }
};

int main() {
    Car myCar;
    myCar.displaySpecifications();

    return 0;
}
