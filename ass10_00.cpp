/*
1. Implement Person (name, age), Employee (id, sal), and Student (roll, marks). 
    Write virtual functions accept() and display() in base and override them in derived classes.
*/

#include <cstring>
#include <iostream>
using namespace std;

class person {
    private:
        char name[24];
        int age;

    public:
        person(char *nm ,int num) {
            strcpy(name, nm);
            age = num;
        }
        virtual void accept(int num1, int num2);
        virtual void display();
};

class empl : public person {
    int id;
    int sal;

    public:
    void accept (int num1, int num2) {
        id = num1;
        sal = num2;
    }
    void display() {
        cout << "id = " << id <<"sal = "<< sal << endl;
    }
};

class student : public person {
    int roll;
    int marks;

    public :
    void accept (int num1, int num2) {
        roll = num1;
        marks = num2;
    }
    void display() {
        cout << "roll = " <<roll  <<"marks = "<< marks << endl;
    }
};

int main (void) {

    return 0;
}