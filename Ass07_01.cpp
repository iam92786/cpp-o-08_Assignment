/*
Day07 : 1. Implement class Manager inherited from Employee class. 
            Employee has protected field salary and private field id. Manager has private field bonus. 
            Implement calc_gross_salary() method in both classes with appropriate logic. Also implement constructors, destructors, getter/setters, facilitators, and test these methods in main().
*/
#include<iostream>
using namespace std;

class chair {
    int id;
    
    public:
    static int count;
    chair(int num) {
        count++;
        cout << "chair id = "<<num<<", Object count = "<< count<< endl;
    }
};
int chair::count = 0;



int main (void) {

    cout << "Assignment01 count the Object"<< endl;
class chair c1(10);
class chair c2(20);
class chair c3(30);


    return 0;
}