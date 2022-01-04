/*
Devun Schneider
CS140
Hawkins
Chapter 9 HW
*/
/*
 Main.cpp will ask the user for four numbers: numerator one, denominator one, numerator two,
 and denominator two. The main function will then create two Relation numbers from
 the input and a third to store results. The main function will call the public
 functions of the relation class using the input.
*/
#include "Relation.h"
#include<iostream>
#include<string>
using namespace std;
int main() {
    int num, den;
    //input numbers and assign to variable
    cout << "Enter Numerator 1 : ";
    cin >> num;
    cout << "Enter Denominator 1 : ";
    cin >> den;
    Relation r1(num, den);
    cout << "Enter Numerator 2 : ";
    cin >> num;
    cout << "Enter Denominator 2 : ";
    cin >> den;
    Relation r2(num, den);
    cout << "Result :" << endl;
    //calling function add and printing results
    Relation r3 = r1.add(r2);
    cout << r1.toString() << " add " << r2.toString() << " = " << r3.toString() << endl;
    cout << r3.toString() << " = " << r3.toDouble() << endl;
    //calling function subtract and printing results
    Relation r4 = r1.subtract(r2);
    cout << r1.toString() << " add " << r2.toString() << " = " << r4.toString() << endl;
    cout << r4.toString() << " = " << r4.toDouble() << endl;
    //calling function multiple and printing results
    Relation r5 = r1.multiple(r2);
    cout << r1.toString() << " add " << r5.toString() << " = " << r5.toString() << endl;
    cout << r5.toString() << " = " << r5.toDouble() << endl;
    //calling function divide and printing results
    Relation r6 = r1.divide(r2);
    cout << r1.toString() << " add " << r6.toString() << " = " << r6.toString() << endl;
    cout << r6.toString() << " = " << r3.toDouble() << endl;
}