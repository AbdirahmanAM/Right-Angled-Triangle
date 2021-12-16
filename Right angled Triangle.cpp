// Right angled Triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Class Exercise II: Write a program that computes the area and perimeter of a right angled triangle.
//BY : Abdirahman Gedi
//Student Number : 137748

#include <iostream>
using namespace std;

int main()
{
	//Declaring & initializing variables
	int base = 10, height = 7, hypotenuse = 12;
	int area = 0, perimeter = 0;

	//Computing the area and perimeter of a right angled triangle
	area = base * height * 0.5;
	perimeter = base * height * hypotenuse;

	//Executing the area and perimeter of a right angled triangle
	cout << "......................................................................." << endl;
	cout << "This program computes the area and perimeter of a right angled triangle" << endl;
	cout << "......................................................................." << endl;
	cout << endl;
	cout << "Area of a right angled triangle is: " << area << endl;
	cout << "Perimeter of a right angled triangle is: " << perimeter << endl;
	cout << endl;
	cout << "......................................................................." << endl;

	return 0;

}