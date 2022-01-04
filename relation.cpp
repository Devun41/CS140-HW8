/*
* Devun Schneider
* CS140
* Hawkins
* Chapter 9 HW
*


*/

/*
	Contains: Relation constructor, add, subtract, multiply, divide, toString,
	toDouble, reduce, GCD
*/
#include "Relation.h"
#include <iostream>
#include <string>
#include <sstream> 
using namespace std;

//default the numerator to 0 and the denominator to 1
Relation::Relation(int n = 0, int d = 1)
{
    //Prevent 0 in the denominator
    if (d == 0) {
        denominator = 1;
        numerator = n;
    }
    else if (d < 0) {
        //Avoid negative in the denominator, if it is there move it to the numerator
        denominator = -d;
        numerator = -n;
    }
    else {
        //Simplify the fraction with reduce
        numerator = n; denominator = d;
    }
    reduce();
}
//call reduce, take and return a rational number
Relation Relation::add(const Relation& r) const {

    int a = numerator, b = denominator, c = r.numerator, d = r.denominator;
    int e, g;
    e = (a * d) + (b * c);
    g = (b * d);
    Relation R(e, g);
    return R;
}
//call reduce, take and return a rational number
Relation Relation::subtract(const Relation& r) const {

    int a = numerator, b = denominator, c = r.numerator, d = r.denominator;
    int e, g;
    e = (a * d) - (b * c);
    g = (b * d);
    Relation R(e, g);
    return R;
}
//call reduce, take and return a rational number
Relation Relation::multiple(const Relation& r) const {

    int a = numerator, b = denominator, c = r.numerator, d = r.denominator;
    int e, g;
    e = (a * c);
    g = (b * d);
    Relation R(e, g);
    return R;

}//call reduce, take and return a rational number
Relation Relation::divide(const Relation& r) const {

    int a = numerator, b = denominator, c = r.numerator, d = r.denominator;
    int e, g;
    e = (a * d);
    g = (b * c);
    Relation R(e, g);
    return R;
}
//divide the numerator and the denominator by the GCD
void Relation::reduce() {
    int c = GCD(numerator, denominator);
    numerator = numerator / c;
    denominator = denominator / c;
}
int Relation::GCD(int x, int y) {
    if (y == 0)
        return x;
    return GCD(y, x % y);
}
string Relation::toString() {
    ostringstream strStream;
    //toString use ostringstream
    //If the denominator is 0 print an error
    if (denominator == 0)
        strStream << "Error :Denominator is Zero";
    //If the numerator is 0 print just the numerator
    else if (numerator == 0)
        //If the denominator is 1 print just the numerator
        strStream << numerator;
    else
        strStream << numerator << "/" << denominator;
    return strStream.str();
}
double Relation::toDouble() {
    if (denominator == 0)
        return 0;
    //cast to double
    return (double)numerator / denominator;
}