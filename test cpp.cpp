/*
#include<iostream>
using namespace std;
int main(){ 
	cout << "Hello World" << endl;
	cout << "Sybau" << endl;
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){ 
	long x,y;
	short a,b;
	x=10;
	y=100;
	b=00;
	cout << "Value x =" << x << endl;
	cout << "Value y =" << y << endl;
	cout << "Value a =" << a << endl;
	cout << "Value b =" << b << endl;
	return 0;
}
*/
/*
#include<iostream>
#include<iomanip>//using sizeof() to know each side of datatype
using namespace std;
int main(){ 
	system("cls");
	cout << "Size of short =" << sizeof(short) << endl;
	cout << "Size of int=" << sizeof(int) << endl;
	cout << "Size of long=" << sizeof(long) << endl;
	cout << "Size of float=" << sizeof(float) << endl;
	cout << "Size of double=" << sizeof(double) << endl;
	cout << "Size of char=" << sizeof(char) << endl;
	cout << "Size of string=" << sizeof(string) << endl;
	cout << "Size of bool=" << sizeof(bool) << endl;
	return 0;
}
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){ 
	int int_variable = 100;
	long long_variable = 1000000;
	float float_variable = 12.7;
	double double_variable = 23.9;
	char char_variable = 'A';
	string string_variable = "Love you"; 
	bool bool_variable = true;
	
	cout << "int_variable =" << int_variable << endl;
	cout << "long_variable  =" << long_variable << endl;
	cout << " float_variable =" << setprecision(6) << float_variable << endl;
	cout << " double_variable =" << setprecision(6) << double_variable << endl;
	cout << " char_variable =" << char_variable << endl;
	cout << " string_variable =" << string_variable << endl;
	cout << " bool_variable =" << bool_variable << endl;
	
	return 0;
}