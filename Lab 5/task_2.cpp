#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string dateOfBirth;
    int id;
    double cgpa;

public:
    
    Student() : name(""), dateOfBirth(""), id(0), cgpa(0.0) {}

    
    void setName(const string& studentName) {
        name = studentName;
    }

    void setDateOfBirth(const string& birthDate) {
        dateOfBirth = birthDate;
    }

    void setId(int studentId) {
        id = studentId;
    }

    void setCGPA(double studentCgpa) {
        cgpa = studentCgpa;
    }

  
    void getInfo() {
        cout << "Name: " << name <<endl;
        cout << "Date of Birth: " << dateOfBirth <<endl;
        cout << "ID: " << id <<endl;
        cout << "CGPA: " << cgpa <<endl;
    }
};

int main() {
    
    Student student;

    
    student.setName("Sakib");
    student.setDateOfBirth("1995-05-15");
    student.setId(210041);
    student.setCGPA(3.8);


    cout << "Student Information:\n";
    student.getInfo();

    return 0;
}

