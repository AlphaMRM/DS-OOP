/*	NC RAMISH MASOOD
	209512
	DE-39 / MTS-B
	ASSIGNMENT #2
	SUBMITTED TO: AYESHA ZEB	*/


//Problem 1
/*
#include<iostream>
using namespace std;
int main()
{
	int num;
	int count = 0;

	cout << "Enter the number:  ";
	cin >> num;
	
	if (num<0)
	{cout << "You have entered negative number!";}
	else
	{
		while (num > 0)
		{
			cout << "Enter the number:  ";
			cin >> num;
	if (num == 1)
		{count++;}
	}
	}
	cout << endl;
	cout << "Total number of times user has entered 1 :  ";
	cout << count << endl;

	system("pause");
	return 0;}*/


//Problem 2
/*
#include <iostream>
using namespace std;
int main()
{   int smallest1 = 0, smallest2 = 1, maximum1 = 0, maximum2 = 0;
	int a;
	int num = 1;
	int f = 0;
	bool flag = true;
	for (; flag == true;)
	{
		cout << "Enter a number: " << num << " : ";
		cin >> a;
		num++;
		if (a < 0)
		{
			flag = false;
			break;
		}
		else
		{
			if (a > maximum1)
			{
				int temp = maximum1;
				maximum1 = a;
				maximum2 = temp;
			}
			if (a < maximum1 && a > maximum2)
			{
				maximum2 = a;
			}
			if (a < maximum2 && a > smallest1)
			{
				smallest1 = a;
			}
			if (a < smallest1 && a > smallest2)
			{
				smallest1 = a;
				if (f == 0)
				{
					smallest2 = smallest1;
					f++;
				}
			}
			if (a < smallest2)
			{
				int temp = a;
				smallest1 = smallest2;
				smallest2 = a;
			}
		}
	}
	cout << "Second maximum is: " << maximum2 << endl;
	cout << "Second minimum is: " << smallest1 << endl;
	system("pause");
	return 0;}*/


//Problem 3
/*
#include <iostream>
using namespace std;

int main()
{
	int num, num1;
	cout << "Enter dices score: ";
	cin >> num;
	cout << endl;

	switch (num)
	{
	
	case 1:
	{
			  cout << "Number on dice is " << num << " You have lost!" << endl;
			  break;
	}
	
	case 2:
	{
			  cout << "Number on dice is " << num << " .You have won the game." << endl;
			  break;
	}
	
	case 3:
	case 4:
	case 5:
		cout << "You have lost!" << endl;
		break;
	
	case 6:
	{
			  cout << "\nEnter dice number again: ";
			  cin >> num;

			  if (num == 6)
			  {
				  cout << "Number on dice is " << num << ".\n Success twice!" << endl;
			  }
			  else
			  {
				  cout << "Number on dice is " << num << "Game is draw." << endl;
			  }
			  break;
	}
	default:
	{
			   cout << "You are cheating. I won't play!";
	}
	}
	system("pause");
	return 0;}*/


//Problem 4
/*
#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter number to take possible permutation:  ";
	cin >> num;

	cout << endl << "OUTPUT IS:  \n";
	for (int i = 1; i <= num; i++)
	{
		for (int k = 1; k <= num; k++)
		{
			cout << i <<" " << k << ", ";
		}
	}
	system("pause");
	return 0;}*/


//Problem 5
/*
#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter number to print diamond:  ";
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		for (int k = 0; k < num - i; k++)
		{
			cout << " ";
		}
		for (int k = 0; k < i * 2 - 1; k++)
		{                                               // print upperbody
			cout << "*";
		}
		if (i == num)
		{
		}
		else
		{
			cout << endl;
		}
	}

	for (int i = 0; i < num; i++)
	{
		for (int k = 0; k <= i; k++)
		{
			cout << " ";
		}                                             // print lower body
		for (int k = (num - i - 1) * 2 - 1; k >0; k--)
		{
			cout << "*";
		}

		cout << endl;
	}
	system("pause");
	return 0;}*/