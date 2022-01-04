#pragma once
/*
* Devun Schneider
* CS140
* Hawkins
* Chapter 9 HW
* 
* 
 -a constructor that receives one integer for the numerator with a default of 0 and an integer
 for the denominator with a default of 1. This should be stored in reduced for using the reduce function
-public prototypes for add, subtract, multiple, divide, toString, and toDouble
-private data members numerator and denominator.
-private functions that will reduce the fraction and find the greatest common divisor (GCD).
*/

#ifndef RELATION_H
#define RELATION_H
#include <iostream>
#include <string>

using namespace std;
//interface
class Relation {

	//initialize private data members numerator and denominator
private:int numerator, denominator;

	//private functions that will reduce the fraction and find the greatest common divisor (GCD)
	int GCD(int x, int y);
	void reduce();
public:
	//constructor
	Relation(int, int);
	//public prototypes for add, subtract, multiple, divide, toString, and toDouble
	Relation add(const Relation& r) const;
	Relation subtract(const Relation& r) const;
	Relation multiple(const Relation& r) const;
	Relation divide(const Relation& r) const;
	string toString();
	double toDouble();

};
#endif