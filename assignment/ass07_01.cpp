/*
Day07 : 1. Implement class Manager inherited from Employee class. Employee has protected field salary and private field id. 
            Manager has private field bonus. Implement calc_gross_salary() method in both classes with appropriate logic. 
            Also implement constructors, destructors, getter/setters, facilitators, and test these methods in main().

OUT : 
    Assignment07: Implement class Manager inherited from Employee class
    constructors: emp 
    constructors: manager
    sizeof(manager) = 12
    Manger id: 0, salary: 50000
    Manger id: 10, salary: 50000
    setManBonus: enter
    manager::calc_gross_salary: enter 
    Gross salary :manager::calc_gross_salary: enter 
    60000
    destructors: manager
    destructors: emp 
    */
#include<iostream>
using namespace std;

class emp {
    int id;
    float salary;
    public:
    emp() {
        cout << "constructors: emp "<< endl;
    }
    ~emp() {
        cout << "destructors: emp "<< endl;
    }

    emp(int num=0, float sla=0) {
        cout << "constructors: emp "<< endl;
        id = num;
        salary = sla;
    }
    void setEmpId(int num) {
        id = num;
    }
    int getEmpId () {
        return id;
    }
    void setEmpSalary(int num) {
        salary = num;
    }
    int getEmpSalary () {
        return salary;
    }
    void calc_gross_salary() {
        cout << "emp::calc_gross_salary "<< endl;
    }
};

class manager : public emp
{
    int bonus;
    public:
    manager() : emp(00, 50000){
        cout << "constructors: manager" << endl;
    }
    ~manager() {
        cout << "destructors: manager" << endl;
    }
    void setManBonus(float in) {
        cout << "setManBonus: enter" << endl;
        bonus = in;
    }
    float getManBonus() {
        cout << "getManBonus: enter" << endl;
        return bonus;
    }
    int calc_gross_salary() {
        cout << "manager::calc_gross_salary: enter "<< endl;
        return getEmpSalary()+bonus;
    }
};


int main (void) {

    cout << "Assignment07: Implement class Manager inherited from Employee class"<< endl;
    manager m1;
    cout << "sizeof(manager) = "<<sizeof(m1)<<endl;
    cout << "Manger id: " << m1.getEmpId() <<", salary: "<< m1.getEmpSalary() << endl;
    m1.setEmpId(10);
    cout << "Manger id: " << m1.getEmpId() <<", salary: "<< m1.getEmpSalary() << endl;
    m1.setManBonus(10000);
    m1.calc_gross_salary();
    cout << "Gross salary :" << m1.calc_gross_salary() << endl;
    return 0;
}