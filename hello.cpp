// hello.cpp : Defines the entry point for the console application.
//
#include <iostream>
using namespace std;

int main()
{
	cout << "Hello World" << endl; //Prints Hello World
	
	cout << "Size of char is: " << sizeof(char) << endl;
	cout << "Size of int is: " << sizeof(int) << endl;
	cout << "Size of short int is: " << sizeof(short int) << endl;
	cout << "Size of long int is: " << sizeof(long int) << endl;
	cout << "Size of float is: " << sizeof(float) << endl;
	cout << "Size of double is: " << sizeof(double) << endl;
	cout << "Size of wchar_t is: " << sizeof(wchar_t) << endl;

	enum colour { red, green, blue } c; //enum is a enumerated types values start 0,1,2 etc.
	c = blue;

	enum color { yellow, orange = 5, purple }; //this enum list will go 0, 5, 6 as we have set green as 5.

	int f = 20;

	cout << c << endl;
	cout << color(orange) << endl;
	cout << color(purple) << endl;
	cout << 5 << endl;
	cout << f << endl;
	cout << "this is the end of this file" << endl;
	return 0;
}

