#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int lenpoly = 0;
int lenzeros = 0;

struct PolyNomial
{
	int coeff;
	int expo;
};

void display(PolyNomial poly[], string * temp)
{
	int len = 0;
	lenpoly = 0;
	for (int j = 0; j < 10; j++)
	{
		if (*(temp + j) == "")
			break;
		poly[j].coeff = stoi(*(temp + j));
		len++;
	}
	lenpoly = len;
	for (int j = 0; j < len; j++)
	{
		poly[j].expo = len - j;
	}
	if (poly[0].coeff == 1)
		cout << "Polynomial f(x) = x^" << poly[0].expo - 1;
	else
		cout << "Polynomial f(x) = " << poly[0].coeff << "x^" << poly[0].expo - 1;
	for (int j = 1; j < len; j++)
	{
		if (poly[j].coeff<0 && poly[j].expo - 1 != 0)
			cout << poly[j].coeff << "x^" << poly[j].expo - 1;
		else if (poly[j].expo - 1 == 1 && poly[j].coeff>0)
			cout << "+" << poly[j].coeff << "x";
		else if (poly[j].expo - 1 == 1 && poly[j].coeff<0)
			cout << poly[j].coeff << "x";
		else if (poly[j].expo - 1 == 0 && poly[j].coeff>0)
			cout << "+" << poly[j].coeff;
		else if (poly[j].expo - 1 == 0 && poly[j].coeff<0)
			cout << poly[j].coeff;
		else if (poly[j].coeff != 0)
			cout << "+" << poly[j].coeff << "x^" << poly[j].expo - 1;
	}
	cout << "  |  has roots at x = ";
}

//turns input.txt unto array splitting each one at ','
string *SplitNumbers(string str, string word[])
{
	int i = 0;
	for (auto x : str)
	{
		if (x == ',')
		{
			i++;
		}
		else
		{
			word[i] = word[i] + x;
		}
	}
	return word;
}

int Eval(PolyNomial p[], int input) {
	int value = 0;

	for (int i = 0; i < lenpoly; i++) {
		value += p[i].coeff * pow(input, (p[i].expo - 1));
	}
	return value;
}

int *limits(PolyNomial poly[])
{
	int max = poly[0].coeff;
	int min = poly[0].coeff;
	for (int i = 1; i < lenpoly; i++)
	{
		if (max < abs(poly[i].coeff)) {
			max = abs(poly[i].coeff);
		}
		if (min > abs(poly[i].coeff)  && abs(poly[i].coeff) != 0) {
			min = abs(poly[i].coeff);
		}

	}
	//cout << max << ":"<< << ":" << min << endl;
	int * maxmin = new int[2];
	maxmin[0] = (poly[0].expo - 1)*(max / min);
	maxmin[1] = -maxmin[0];
	return maxmin;
}

int *Zeroes(PolyNomial p[], int * maxmin)
{
	int * zeroes = new int[10];
	lenzeros = 0;
	int j = 0;
	for (int i = maxmin[1]; i <= maxmin[0]; i++)
	{

		if (Eval(p, i) == 0)
		{
			zeroes[j] = i;
			j++;
			lenzeros = j;
		}
	}

	return zeroes;
}

int main() {

	ifstream input("input.txt");
	string i;
	//For equation 1
	getline(input, i);
	string word[10];
	string* temp = SplitNumbers(i, word);
	PolyNomial poly[10];
	display(poly, temp);
	int *l = limits(poly);
	int *z = Zeroes(poly, l);
	if (lenzeros == 0)
	{
		cout << " No Integers" << endl;
	}
	else
	{
		cout << "[";
		for (int i = 0; i < lenzeros - 1; i++)
		{
			cout << z[i] << " , ";
		}
		cout << z[lenzeros - 1];
		cout << "]" << endl;
	}

	cout << "Search Range was : [" << l[1] << "," << l[0] << "]" << endl << endl;

	//For equation 2
	getline(input, i);
	string word2[10];
	temp = SplitNumbers(i, word2);
	PolyNomial poly2[10];
	display(poly2, temp);
	l = limits(poly2);
	z = Zeroes(poly2, l);
	if (lenzeros == 0)
	{
		cout << " No Integers" << endl;
	}
	else
	{
		cout << "[";
		for (int i = 0; i < lenzeros - 1; i++)
		{
			cout << z[i] << " , ";
		}
		cout << z[lenzeros - 1];
		cout << "]" << endl;
	}


	cout << "Search Range was : [" << l[1] << "," << l[0] << "]" << endl << endl;

	//For equation 3
	getline(input, i);
	string word3[10];
	temp = SplitNumbers(i, word3);
	PolyNomial poly3[10];
	display(poly3, temp);
	l = limits(poly3);
	z = Zeroes(poly3, l);
	if (lenzeros == 0)
	{
		cout << " No Integers" << endl;
	}
	else
	{
		cout << "[";
		for (int i = 0; i < lenzeros - 1; i++)
		{
			cout << z[i] << " , ";
		}
		cout << z[lenzeros - 1];
		cout << "]" << endl;
	}
	cout << "Search Range was : [" << l[1] << "," << l[0] << "]" << endl << endl;

	//For equation 4
	getline(input, i);
	string word4[10];
	temp = SplitNumbers(i, word4);
	PolyNomial poly4[10];
	display(poly4, temp);
	l = limits(poly4);
	z = Zeroes(poly4, l);
	if (lenzeros == 0)
	{
		cout << " No Integers" << endl;
	}
	else
	{
		cout << "[";
		for (int i = 0; i < lenzeros - 1; i++)
		{
			cout << z[i] << " , ";
		}
		cout << z[lenzeros - 1];
		cout << "]" << endl;
	}
	cout << "Search Range was : [" << l[1] << "," << l[0] << "]" << endl << endl;
	return 0;
}
