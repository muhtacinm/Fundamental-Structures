#include<iostream>
using namespace std;

//bool function for AND
bool AND(bool A, bool B)
{
	if (A && B)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//bool function for nand
bool NAND(bool A, bool B)
{
	if (A && B)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

//bool function for or
bool OR(bool A, bool B)
{
	if (A || B)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//bool function for nor
bool NOR(bool A, bool B)
{
	if (A || B)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

//bool function for not
bool Not(bool A)
{
    A = !A;

	return A;
}

//bool function for xor
bool XOR(bool A, bool B)
{
	if (A == B)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

//bool function for xnor
bool XNOR(bool A, bool B)
{
	if (A == B)
	{return 1;
	}
	else
	{
		return 0;
	}
}


int main()
{

    //for all three problems i utilized a truth table and used if statements to call the functions and see which
    // one returned true and printed the statement

    //problem 1
	bool A=0, B=0, C=0;
	cout << "Statement 1 True On:";
	if (XOR( AND(A, B), AND(OR(C, A), OR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}
 	A = 1, B = 0, C = 0;
	if (XOR( AND(A, B), AND(OR(C, A), OR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}
 	A = 0, B = 1, C = 0;
	if (XOR( AND(A, B), AND(OR(C, A), OR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}
 	A = 0, B = 0, C = 1;
	if (XOR( AND(A, B), AND(OR(C, A), OR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}
 	A = 1, B = 1, C = 0;
	if (XOR( AND(A, B), AND(OR(C, A), OR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}
 	A = 1, B = 0, C = 1;
	if (XOR( AND(A, B), AND(OR(C, A), OR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}
 	A = 0, B = 1, C = 1;
	if (XOR( AND(A, B), AND(OR(C, A), OR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}
 	A = 1, B = 1, C = 1;
	if (XOR( AND(A, B), AND(OR(C, A), OR(B, C))))
	{cout << " ("<< A <<"," << B << "," << C << ")";
	}




	//Problem 2

	cout << "\nStatement 2 True On:";
    A = 0, B = 0, C = 0;

	if (AND(	Not(NAND(A, B)),	XOR(OR(C, A), NOR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}
 	A = 1, B = 0, C = 0;
	if (AND(	Not(NAND(A, B)),	XOR(OR(C, A), NOR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}
 	A = 0, B = 1, C = 0;
	if (AND(	Not(NAND(A, B)),	XOR(OR(C, A), NOR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}
 	A = 0, B = 0, C = 1;
	if (AND(	Not(NAND(A, B)),	XOR(OR(C, A), NOR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}
 	A = 1, B = 1, C = 0;
	if (AND(	Not(NAND(A, B)),	XOR(OR(C, A), NOR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}
 	A = 1, B = 0, C = 1;
	if (AND(	Not(NAND(A, B)),	XOR(OR(C, A), NOR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}
 	A = 0, B = 1, C = 1;
	if (AND(	Not(NAND(A, B)),	XOR(OR(C, A), NOR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}
	 A = 1, B = 1, C = 1;
	if (AND(	Not(NAND(A, B)),	XOR(OR(C, A), NOR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}



	//problem 3

	cout << "\nStatement 3 True On:";
 	A = 0, B = 0, C = 0;

	if (XNOR(	OR(A, B),	NAND(NOR(C, A), XNOR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}
 	A = 1, B = 0, C = 0;
	if (XNOR(	OR(A, B),	NAND(NOR(C, A), XNOR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}
 	A = 0, B = 1, C = 0;
	if (XNOR(	OR(A, B),	NAND(NOR(C, A), XNOR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}
 	A = 0, B = 0, C = 1;
	if (XNOR(	OR(A, B),	NAND(NOR(C, A), XNOR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}
 	A = 1, B = 1, C = 0;
	if (XNOR(	OR(A, B),	NAND(NOR(C, A), XNOR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}
 	A = 1, B = 0, C = 1;
	if (XNOR(	OR(A, B),	NAND(NOR(C, A), XNOR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}
 	A = 0, B = 1, C = 1;
	if (XNOR(	OR(A, B),	NAND(NOR(C, A), XNOR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")";
	}
 	A = 1, B = 1, C = 1;
	if (XNOR(	OR(A, B),	NAND(NOR(C, A), XNOR(B, C))))
	{cout << " (" << A << "," << B << "," << C << ")"<<endl;
	}

	return 0;
}
