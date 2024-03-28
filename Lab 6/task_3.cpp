#include <iostream>

using namespace std;

class FLOAT {
private:
    float value;

public:
    FLOAT(float val) : value(val) {}

    FLOAT operator+(const FLOAT& other) const {
        return FLOAT(value + other.value);
    }

    FLOAT operator-(const FLOAT& other) const {
        return FLOAT(value - other.value);
    }

    FLOAT operator*(const FLOAT& other) const {
        return FLOAT(value * other.value);
    }

    FLOAT operator/(const FLOAT& other) const {
        if (other.value != 0) {
            return FLOAT(value / other.value);
        } else {
            cout << "Error" << endl;
            return FLOAT(0.0);
        }
    }

    float getFloatValue() const {
        return value;
    }

    int toInt() const {
        return (int)value;
    }
};

int main() {
    FLOAT f1(5.052);
    FLOAT f2(2.0);
    FLOAT f3 = f1 + f2;
    FLOAT f4 = f1 - f2;
    FLOAT f5 = f1 * f2;
    FLOAT f6 = f1 / f2;

    cout << "f1 + f2 = " << f3.getFloatValue() << endl;
    cout << "f1 - f2 = " << f4.getFloatValue() << endl;
    cout << "f1 * f2 = " << f5.getFloatValue() << endl;
    cout << "f1 / f2 = " << f6.getFloatValue() << endl;

    int i = f1.toInt();
    cout << "int i = " << i << endl;

    return 0;
}


