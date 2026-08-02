/*
1. Write a C++ program to implement a stack using an array. The user should enter the size of the stack at runtime. Implement the following operations:
- Push an element onto the stack.
- Pop an element from the stack. (Pops the last pushed element)
- Display all elements in the stack.
- Handle stack overflow (when the stack is full) and stack underflow (when the stack is empty). 
- Provide a menu-driven interface for performing these operations.
*/
#include<iostream>

using namespace std;

class stack{
    int arr[5];
    int index;

    public:
    stack(){
        cout << "Stack Constructer " << endl;
        index = -1;
    }

    void push(int num){
        cout<<"Push num : "<< num <<endl;
        ++index;
        arr[index] = num;
    }
    void pop(){
        cout<<"Pop"<<endl;
        --index;
    }
    void display(){
        cout<<"Dispaly Stack : "<<endl;
        if(index < 0){
            cout<< "Stack is Empty" << endl;
            return;
        }
        for(int i = 0; i < index; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

int main (void)
{
    stack s1;
    int input, num;
    std::cout << "Assignment-01 of Day05" << std::endl;
    std::cout << "Sizeof class = " << sizeof(s1) << std::endl;

    while(1) {
        std::cout << "Menu List"<<std::endl;
        cout << "1. push"<< endl;
        cout << "2. pop" << endl;
        cout << "3. display"<< endl;
        cout << "4. Exit!" << endl;
        cin >> input;
        switch (input)
        {
            case 1:
                cout << "Enter number :";
                cin >> num;
                s1.push(num);
                break;
            case 2:
                s1.pop();
                break;
            case 3:
                s1.display();
                break;
            case 4:
                break;

            default:
                cout << "Invalid Option!"<<endl;
                break;;
        }
        if(input == 4)
            break;
    }
    return 0;
}