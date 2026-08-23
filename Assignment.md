# CPP-08 Assignment



## Day29
## Day28
1. Create a class Employee (id, name, sal). Implement menu driven program to manage employee in a vector. Menu options: Add Emp, Display All Emp, Find Emp, Delete Emp, Save to file, Load from file.
2. Reimplement above program using STD list.
3. Store n integers in a vector and find the maximum and minimum elements using vector operations.

## Day27
1. Complete LinkedList template class with remaining operations.
2. Implement Stack and Queue using above LinkedList class.

## Day26
1. Implement generic Array class with appropriate members.
2. How to use our generic Stack<T> class with char str[20];?

## Day25
1. Create a class User with fields id, name, email, mobile, passwd. Write user management program that stores users data into file and provide facility to add, display, delete, edit users. Also write a function that inputs email & passwd and check if login is successful.

## Day24
1. Create a class CricketPlayer with id, name, runs and wickets members. Write a program that can append new player details in a text file and display all the players info from file.

## Day23
1. Implement a Fraction class with fields numerator and denominator. Provide appropriate conversion functions. Overload relevant operators. Implement a function object to check if the given Fraction is proper object or not.

## Day22
1. Implement a smart pointer class ArrayPtr for our Array class.
2. Implement a String class - check basic examples in slides. Make operator=() safe.

## Day21
1. Implement a class Person (with char name[20], age). Implement a class Car (with model, price, Person *driver). Consider that Person object is allocated dynamically e.g. Car c1("i10", 700000, new Person("Nilesh", 42)); Now implement copy constructor and assignment operator for Person and Car class. 
2. Implement a Matrix class (int rows, int cols, int **mat - dynamically allocated 2-d array). Implement copy ctor, assign operator, matrix addition, insertion and extraction operators.

## Day20
1. Distance class - overload+, -, ++, --, <<, >> operators. Also consider adding number (feet) to the distance object. Implement all operators as friend functions.
2. Time class - overload++, -- operators as member functions.

## Day19
1. Implement Singly LinkedList in C++. Make proper use of friend keyword.
2. Implement the function int divide(int arr[], int arr_size, int numerator_index, int denominator_index). Throw appropriate exceptions like NULL array, Invalid size (negative), Index out of bounds, and Divide by Zero.
3. Rewrite above function to throw the error of the custom exception class.

## Day18
1. Write distance class with data members feet & inches. Write constructors, getter/setter, add() to add two distances. Implement exception handling as appropriate.

## Day17
- NA

## Day16
1. Implement complete Product shop assignment in modular fashion (.h & .cpp files per class).
2. Implement complete SalesManager diamond inheritance problem in modular fashion.

## Day15
- NA

## Day14
1. Design a payment system using an interface Payment. Implement different payment methods like Credit Card, UPI, and Cash, each providing its own payment processing logic.
2. Create a notification interface with a common method to send messages. Implement Email, SMS, and Push Notification classes using the interface.
3. Design a bank account interface with deposit, withdrawal, and interest calculation methods. Implement Savings, Current, and Fixed Deposit account classes.

## Day13
- NA

## Day12
1. Add cout statements in all functions of today's code. Debug all codes step-by-step.
NOTE: This will teach you one of the C++ implementation -- MSVC or G++.

## Day11
- NA

## Day10
1. Implement Person (name, age), Employee (id, sal), and Student (roll, marks). Write virtual functions accept() and display() in base and override them in derived classes.

## Day09
1. Implement SalesManager class inherited from Salesman and Manager, which in turn inherited from Employee. Refer the screenshot.

## Day08
1. How will you create queue using Linked List?
2. Create two base classes, AcademicResult and SportsResult to store the score of academics and grade of sports. Now create a class StudentProgressCard that stores a student's name and roll number, academic result and sports result. Finally display the progress card.

## Day07 : Inheritance
1. Implement class Manager inherited from Employee class. Employee has protected field salary and private field id. 
    Manager has private field bonus. Implement calc_gross_salary() method in both classes with appropriate logic. 
    Also implement constructors, destructors, getter/setters, facilitators, and test these methods in main().

## Day05
1. Modify the chair class so that you can count all the chair objects created in the program. Display the count in main() before exit.
2. Create class date (with fields day, month, year and relevant methods), class address (with fields city, country, pin and relevant methods), class product (with fields id, name and relevant methods). Now create the class order with fields order_id, status (PENDING/DELIVERED), order_date, delivery_address, and product. Write relevant methods like ctors, getter/setters, accept(), display().
Notice the order of constructor and destructor calling when you create object of order class. What will happen, if you change the order of data members in the order class?
3. Create class item with fields id, name, and price. We will create an array of the item class objects dynamically as per size given by end user. Ensure that item ids and prices are auto-assigned in param-less ctor of the class. e.g. If user want to create array of 3 objects, then their ids should be 1, 2, 3 and their prices should be 100, 200, 300. You can keep their names blank. Write a static method in the class display_all(array) to display all the items passed to it.
4. Design a class **Ticket** for a movie theater. Each ticket is either **Full** or **Half**, with fares of Rs. 10 and Rs. 5 respectively. Create suitable data members and member functions to keep track of the total number of tickets sold and the total collection, choosing class and object members appropriately.

## Day05
1. Write a C++ program to implement a stack using an array. The user should enter the size of the stack at runtime. Implement the following operations:
- Push an element onto the stack.
- Pop an element from the stack. (Pops the last pushed element)
- Display all elements in the stack.
- Handle stack overflow (when the stack is full) and stack underflow (when the stack is empty). 
- Provide a menu-driven interface for performing these operations.

## Day04
1. Create a date class with day, month, year fields. Create constructor with default arguments. Also implement getter/setters, accept/display methods.
2. How can you declare references to the following?
   - int arr[5];
   - int fun() { ... };
3. Implement int& max(int&, int&) that returns a reference to the larger integer, allowing the caller to modify it.
4. Dynamically allocate an array of "n" dates to store date objects. Accept and display them back.

## Day03
1. Create person class with name and age data members. Implement constructors, accept() and display() facilitators using cin/cout.
2. Add accept() and display() method in our time class. Make getter/setter methods as "inline".

## Day02
1. Write class date with appropriate data members and member functions. Write constructors, getters, setters, facilitators, destructors.
2. Write a class distance with data members feet and inches. Write constructors, getters, setters, facilitators, destructors. Also write a method to add a distance to another distance i.e. d3 = d1.add(d2); 

## Day01
1. Implement increment() function in today's time class. Increment seconds by 1. Ensure that max time can be 23:59:59.
2. Modify display() function in in today's time class to display time with AM/PM (12-hour format).
3. Write class date with appropriate data members and member functions.