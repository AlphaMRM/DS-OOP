//RAMISH MASOOD, 209512, MTS-39-A
//NUST CEME, PAKISTAN

//LinkedList Functions File

#include"LinkedListFunctions.h"

linkedlist::linkedlist()
{
	head = NULL;
}

void linkedlist::IAS(double val1, double val2)	// IAS = Insert at start
{

	CN *A = new CN;
	A->ptr = head;
	head = A;
	A->real = val1;
	A->imaginary = val2;
}

void linkedlist::IAE(double val1, double val2)	// IAE = Insert at end
{
	CN *A = new CN;
	CN *B = new CN;
	A = head;

	while (A->ptr != NULL)
	{
		A = A->ptr;
	}

	A->ptr = B;
	B->real = val1;
	B->imaginary = val2;
	B->ptr = NULL;
}

void linkedlist::DAP(int position)	// DAP = Delete at position
{
	CN *current = new CN;
	CN *previous = new CN;
	current = head;
	previous = head;

	for (int i = 1; i < position; i++)
	{
		previous = current;
		current = current->ptr;
	}

	previous->ptr = current->ptr;
	delete current;
}

void linkedlist::VAP(int position)	// VAP = Value at position 
{
	CN *current = new CN;
	current = head;

	for (int i = 1; i < position; i++)
	{
		current = current->ptr;
	}

	cout << current->real << "+" << current->imaginary << "i";
}

void linkedlist::IAP(double val1, double val2, int position)	//IAP = Insert at position
{
	CN *temp = new CN;
	temp->ptr = head;
	CN *temp2 = new CN;
	CN *inserted = new CN;

	for (int i = 1; i <= position; i++)
	{
		temp = temp->ptr;
	}

	temp2 = temp->ptr;
	inserted->ptr = temp2;
	temp->ptr = inserted;
	inserted->real = val1;
	inserted->imaginary = val2;
}

void linkedlist::print()
{
	CN *temp = head;

	while (temp != NULL)
	{
		cout << temp->real << "+" << temp->imaginary << "i" << " ";
		temp = temp->ptr;
	}
	cout << endl << endl;
}