//RAMISH MASOOD, 209512, MTS-39-A
//NUST CEME, PAKISTAN

//Main Function

#include "LinkedListFunctions.h"
void main()
{
	// Declaration of all variables
	linkedlist list;
	CN c1, c2, c3, process, sum, product, difference, divide;


	//Declaration of all values
	c1.real = 4; c1.imaginary = 5; c2.real = 3; c2.imaginary = -3;	c3.real = 4; c3.imaginary = 3;

	//Creating a linked list and passing values
	list.IAS(c3.real, c3.imaginary);
	list.IAS(c2.real, c2.imaginary);
	list.IAS(c1.real, c1.imaginary);
	cout << "Linked list is successfully created." << endl;;
	list.print();

	//Step 1, (-4+5i)+(-3-3i)
	sum = c1 + c2;
	list.IAE(sum.real, sum.imaginary);
	cout << "Complex number 1 & complex number 2 are added and inserted at end of linked list successfully." << endl;
	list.print();

	//Step 2, (-4+5i)-(-4+3i)
	difference = c1 - c3;
	list.IAE(difference.real, difference.imaginary);
	cout << "Complex number 3 is subtracted from complex number 1 & inserted at the end of linked list successfully." << endl;
	list.print();

	//Step 3, (-3-3i)*(-4+3i)
	product = c2 * c3;
	list.IAE(product.real, product.imaginary);
	cout << "Complex number 2 & complex number 3 is multiplied successfully." << endl;
	list.print();

	//Step 4, (-4+5i)/(-4+3i) & delete element at 4
	divide = c1 / c3;
	list.DAP(4);
	list.IAE(divide.real, divide.imaginary);
	cout << "Complex number 1 divided with complex number 3 successfully." << endl;
	list.print();

	system("pause>0");
}