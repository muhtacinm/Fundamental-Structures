#include <conio.h>
#include <iostream>
#include <string>
using namespace std;


int main() {

	//initalize arrays
	int i = 0;
	int a[] = { 0,0,0,0,1,1,1,1 };
	int b[] = { 0,0,1,1,0,0,1,1 };
	int c[] = { 0,1,0,1,0,1,0,1 };

	//gets array a
	cout << "A: ";
	for (int i = 0; i < 8; i++)
	{
		cout << " " << a[i] << " |";
	}

	//gets array b
	cout << "\nB: ";
	for (int i = 0; i < 8; i++)
	{
		cout << " " << b[i] << " |";
	}

	//gets array c
	cout << "\nC: ";
	for (int i = 0; i < 8; i++)
	{
		cout << " " << c[i] << " |";
	}

	//truth table showing where true and false with five problems
	cout << "\n------------------------------------" << endl;
	cout << "1. ";
	i = 0;
	while (i < 8)
	{
		if ((a[i] && b[i]) || (a[i] && c[i]))
		{
			cout << " " << 1 << " |";
		}
		else {
			cout << " " << 0 << " |";
		}

		i++;
	}

	cout << "\n2. ";
	i = 0;
	while (i < 8)
	{
		if ((a[i] && c[i]) && (b[i] && (!(c[i]))))
		{
			cout << " " << 1 << " |";
		}
		else {
			cout << " " << 0 << " |";
		}

		i++;
	}

	cout << "\n3. ";
	i = 0;
	while (i < 8)
	{
		if ((a[i] || b[i]) && !((b[i] || c[i])))
		{
			cout << " " << 1 << " |";
		}
		else {
			cout << " " << 0 << " |";
		}

		i++;
	}

	cout << "\n4. ";
	i = 0;
	while (i < 8)
	{
		if ((a[i] || (!a[i] && c[i])) && (!a[i] && !b[i]))
		{
			cout << " " << 1 << " |";
		}
		else {
			cout << " " << 0 << " |";
		}

		i++;
	}

	cout << "\n5. ";
	i = 0;
	while (i < 8)
	{
		if (((b[i] && c[i]) || (c[i] && a[i])) && ((a[i] || b[i]) && c[i]))
		{
			cout << " " << 1 << " |";
		}
		else {
			cout << " " << 0 << " |";
		}

		i++;
	}


	//shows where  (A and B) or (A and C) is correct
	cout << "\n------------------------------------" << endl;
	cout << "Statement 1 correct on: ";
	i = 0;
	while (i < 8)
	{
		if ((a[i] && b[i]) || (a[i] && c[i]))
		{
			cout << "(" << a[i] << " , " << b[i] << ", " << c[i] << ") ";

		}

		i++;
	}

	// shows where  (A and C) and (B and !C) true 
	cout << "\nStatement 2 correct on: ";
	i = 0;

	while (i < 8)
	{
		if ((a[i] && c[i]) && (b[i] && (!(c[i]))))
		{
			cout << "(" << a[i] << " , " << b[i] << ", " << c[i] << ") ";

		}
		i++;
	}

	//shows where (A or B) and !(B or C) true 
	cout << "\nStatement 3 correct on: ";
	i = 0;

	while (i < 8)
	{
		if ((a[i] || b[i]) && !((b[i] || c[i])))
		{
			cout << "(" << a[i] << " , " << b[i] << ", " << c[i] << ") ";

		}


		i++;
	}

	//shows where (A or (!A and C)) and (!A and !B) true 
	cout << "\nStatement 4 correct on: ";
	i = 0;

	while (i < 8)
	{
		if ((a[i] || (!a[i] && c[i])) && (!a[i] && !b[i]))
		{
			cout << "(" << a[i] << " , " << b[i] << ", " << c[i] << ") ";

		}


		i++;
	}

	//shows where ((B and C) or (C and A)) and ((A or B) and C) true
	cout << "\nStatement 5 correct on: ";
	i = 0;
	while (i < 8)
	{
		if (((b[i] && c[i]) || (c[i] && a[i])) && ((a[i] || b[i]) && c[i]))
		{
			cout << "(" << a[i] << " , " << b[i] << ", " << c[i] << ") ";

		}

		i++;
	}
	_getch();


}