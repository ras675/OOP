#include<iostream>
#include<string>


using namespace std;

class Employee {
private:
    string name;
    string dateOfBirth;
    double salary;

public:
    
    string getName() const {
        return name;
    }

    string getDateOfBirth() const {
        return dateOfBirth;
    }

    double getSalary() const {
        return salary;
    }

    
    void setName(const string& empName) {
    
        name = (empName.length() > 2) ? empName : "Nafi";
    }

    void setDateOfBirth(const string& dob) {
        time_t now = time(0);
        tm* today = localtime(&now);
        tm dobDate;
        strptime(dob.c_str(), "%d/%m/%Y", &dobDate);
        int age = today->tm_year - dobDate.tm_year;

        if ((today->tm_mon < dobDate.tm_mon) || (today->tm_mon == dobDate.tm_mon && today->tm_mday < dobDate.tm_mday)) {
            age--;
        }

        dateOfBirth = (age >= 18) ? dob : "01/01/2002";
    }

    void setSalary(double empSalary) {

        salary = (empSalary >= 10000 && empSalary <= 100000) ? empSalary : 10000;
    }


    void setInfo(const string& empName, const string& dob, double empSalary) {
        setName(empName);
        setDateOfBirth(dob);
        setSalary(empSalary);
    }


    void getInfo() const {
        cout << "Employee Name: " << getName() << endl;
        cout << "Date of Birth: " << getDateOfBirth() << endl;
        cout << "Salary: BDT " << getSalary() << endl;
    }
};

int main() {
    
    Employee emp1;

    emp1.setInfo("Asif", "15/05/1990", 50000);
    emp1.getInfo();


    Employee emp2;
    emp2.setInfo("Ju", "25/12/2006", 5000);
    emp2.getInfo();

    return 0;
}
