//RAMISH MASOOD, 209512, MTS-39-A
//NUST CEME, PAKISTAN

//Calculator Operators Header File

#include<iostream>
using namespace std;

class CN
{
public:
	CN *ptr;
	double real, imaginary = 0;

	//Constructor
	CN() {};

	CN operator-(CN num);
	CN operator*(CN num);
	CN operator/(CN num);
	CN operator+ (CN num);

	//Destructor
	~CN() {}
};

