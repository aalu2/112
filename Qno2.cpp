#include <iostream>
#include <string>

using namespace std;

// Class Student
class Student {
protected:
    int studentNumber;
    string studentName;
    double studentAverage;

public:
    // Constructor with default values
    Student() : studentNumber(0), studentName(""), studentAverage(0.0) {}

    // Set functions
    void setStudentNumber(int num) { studentNumber = num; }
    void setStudentName(string name) { studentName = name; }
    void setStudentAverage(double avg) { studentAverage = avg; }

    // Get functions
    int getStudentNumber() { return studentNumber; }
    string getStudentName() { return studentName; }
    double getStudentAverage() { return studentAverage; }

    // Print function to print the values of data members
    void print() {
        cout << "Student Number: " << studentNumber << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Student Average: " << studentAverage << endl;
    }
};

// Class GraduateStudent inherits from Student
class GraduateStudent : public Student {
protected:
    int level;
    int year;

public:
    // Constructor
    GraduateStudent() : level(0), year(0) {}

    // Set functions
    void setLevel(int lvl) { level = lvl; }
    void setYear(int yr) { year = yr; }

    // Get functions
    int getLevel() { return level; }
    int getYear() { return year; }

    // Print function
    void print() {
        Student::print(); // Call base class print function
        cout << "Level: " << level << endl;
        cout << "Year: " << year << endl;
    }
};

// Class Master inherits from GraduateStudent
class Master : public GraduateStudent {
private:
    int newId;

public:
    // Constructor
    Master() : newId(0) {}

    // Set function
    void setNewId(int id) { newId = id; }

    // Get function
    int getNewId() { return newId; }

    // Print function
    void print() {
        GraduateStudent::print(); // Call base class print function
        cout << "New ID: " << newId << endl;
    }
};

int main() {
    // Declare object of type Student with suitable values then print it
    Student student1;
    student1.setStudentNumber(1);
    student1.setStudentName("Alice");
    student1.setStudentAverage(95.5);
    cout << "Student Information:\n";
    student1.print();

    cout << "\n";

    // Declare object of type Master with your information then print it
    Master masterObj;
    masterObj.setStudentNumber(2);
    masterObj.setStudentName("John Doe");
    masterObj.setStudentAverage(88.3);
    masterObj.setLevel(600);
    masterObj.setYear(2023);
    masterObj.setNewId(123456);
    cout << "\nMaster Information:\n";
    masterObj.print();

    return 0;
}