// Inheritance Example 
// o Write a program that implements inheritance using a base class Person and 
//derived classes Student and Teacher. 
// Demonstrate reusability through inheritance.
//  o Objective: Learn the concept of inheritance.

#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
 
    Person(string n, int a) : name(n), age(a) {}

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
private:
    string course;

public:

    Student(string n, int a, string c) : Person(n, a), course(c) {}

    void display() {
        Person::display();  
        cout << "Course: " << course << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    string subject;

public:
 
    Teacher(string n, int a, string s) : Person(n, a), subject(s) {}

    void display() {
        Person::display();  
        cout << "Subject: " << subject << endl;
    }
};

int main() {

    Student student("Alice", 20, "Computer Science");
    Teacher teacher("Mr. Smith", 45, "Mathematics");

    cout << "Student Info: " << endl;
    student.display();

    cout << "\nTeacher Info: " << endl;
    teacher.display();

    return 0;
}
 
