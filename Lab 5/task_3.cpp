#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    string dateOfBirth;
    double salary;

public:
    // Constructor to initialize the employee object with default values
    Employee() : name("Sakib"), dateOfBirth("2002-01-01"), salary(10000.0) {}

    // Setter function for name with input validation
    void setName(const string& employeeName) {
        if (employeeName.length() > 2) {
            name = employeeName;
        } else {
            name = "Sakib"; // Assign default name
        }
    }

    // Setter function for date of birth with input validation
    void setDateOfBirth(const string& birthDate) {
        // Check if the employee is at least 18 years old
        if (birthDate < "2005-10-26") {
            dateOfBirth = birthDate;
        } else {
            dateOfBirth = "2002-01-01"; // Assign default date of birth
        }
    }

    // Setter function for salary with input validation
    void setSalary(double employeeSalary) {
        if (employeeSalary >= 10000.0 && employeeSalary <= 100000.0) {
            salary = employeeSalary;
        } else {
            salary = 10000.0; // Assign default salary
        }
    }

    // SetInfo function to set all necessary information
    void setInfo(const string& employeeName, const string& birthDate, double employeeSalary) {
        setName(employeeName);
        setDateOfBirth(birthDate);
        setSalary(employeeSalary);
    }

    // Getter functions
    string getName() const {
        return name;
    }

    string getDateOfBirth() const {
        return dateOfBirth;
    }

    double getSalary() const {
        return salary;
    }

    // Display all stored information using the getInfo function
    void getInfo() const {
        cout << "Employee Information:\n";
        cout << "Name: " << getName() <<endl;
        cout << "Date of Birth: " << getDateOfBirth() <<endl;
        cout << "Salary: BDT " << getSalary() <<endl;
    }
};

int main() {
    // Create an Employee object
    Employee employee;

    // Set employee information using setInfo function
   
     employee.setInfo("Tamim", "1990-04-15", 45000.0);
    // Display employee information using the getInfo function
    employee.getInfo();

    return 0;
}

