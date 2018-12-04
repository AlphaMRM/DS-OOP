//RAMISH MASOOD, 209512, MTS-39-A
//NUST CEME, PAKISTAN

//Calculator Operartors File

#include"Operator.h"

CN CN::operator-(CN num)
{
	CN ans;
	ans.real = real - num.real;
	ans.imaginary = imaginary - num.imaginary;
	return ans;
}

CN CN::operator*(CN num)
{
	CN ans;
	ans.real = ((num.real*real) - (num.imaginary*imaginary));
	ans.imaginary = ((num.imaginary*real) + (num.real*imaginary));
	return ans;
}


CN CN::operator/(CN num)
{
	try {
		CN ans;
		float x = ((num.real*num.real) + (num.imaginary*num.imaginary));

		if (x == 0)
		{
			throw 0;
		}

		ans.real = ((num.real*real) + (num.imaginary*imaginary)) / ((num.real*num.real) + (num.imaginary*num.imaginary));
		ans.imaginary = ((num.real*imaginary) - (num.imaginary*real)) / ((num.real*num.real) + (num.imaginary*num.imaginary));

		return ans;
	}

	catch (int i)
	{
		cout << "Can not do division. Denominator is 0. ";
	}
}


CN CN::operator+ (CN num)
{
	CN ans;
	ans.real = num.real + real;
	ans.imaginary = num.imaginary + imaginary;
	return ans;
}