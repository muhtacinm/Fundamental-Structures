#include <conio.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
int b[5] = { 2,4,6,8,10 };
int c[5] = { 1,3,5,7,9 };
int d[5] = { 1,2,3,5,7 };
int e[11];

int F[11];
int newarr[10];
int newarr2[10];
int final[10];
int num_elements = 0;
int l = 0;

int main() {

	// A Intersect D
	cout << "1. A intersect D: ";
	cout << "{ ";
	//compares two arrays from a and b
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 5; j++) {  
			if (a[i] == d[j]) {
				cout << a[i] << " ";
			}
		}
	}cout << "}" << endl;


	// (B union C) intersect A
	cout << "2. (B union C) intersect A: ";
	cout << "{ ";
	int num;
	//b unions c and sets new array as e
	for (int i = 0; i < 6; i++)
	{
		e[i] = b[i];
		l++;

	}
	// with new array c intersects a
	int g = l;
	for (int i = 0; i < 6; i++)
	{
		num = 0;
		for (int j = 0; j < g; j++)
		{
			if (c[i] == b[j]) 
			{
				num = l;
				break;
			}
		}
		if (num == 0)
		{
			e[l] = c[i];    
			l++;        

		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (e[i] == a[j]) {          
			}
		}
	}
	//sort the array in ascending order
	sort(e, e + 10);
	for (size_t i = 0; i != 10; ++i)
		cout << e[i] << " ";
	cout << "}" << endl;



	// not C union C intersects A
	cout << "3. (!C union C) intersect A:";
	cout << "{ ";
	int w = 0;
	int j = 0;
	// gets !C and puts into new array e
	for (int i = 0; i < 10; i++) {
		for (w = 0; w < 5; w++) {
			if (a[i] == c[w]) {
				break;
			}
		}
		if (w == 5) {
			e[j] = a[i];     
			j++;

		}
	}
	// unions c with c
	int n = 0;
	int num8;
	for (int i = 0; i < 6; i++)
	{
		F[i] = e[i];        
		n++;

	}
	int m = n;

	for (int i = 0; i < 7; i++)
	{
		num8 = 0;
		for (int j = 0; j < m; j++)
		{
			if (c[i] == e[j])
			{
				num8 = n;
				break;
			}
		}
		if (num8 == 0)
		{
			F[n] = c[i];        
			n++;

		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (F[i] == a[j]) {
			}
		}
	};
	//sort the array in ascending order
	sort(F, F + 10);
	for (size_t i = 0; i != 10; ++i)
		cout << F[i] << " ";
	cout << "}" << endl;






	// A difference D
	cout << "4. A difference D:";
	cout << "{ ";
	int h = 0;
	// matches two arrays  and couts matching 
	for (int i = 0; i < 10; i++) {
		for (h = 0; h < 10; h++) {
			if (a[i] == d[h]) {         
				break;
			}
		}
		if (h == 10) {
			cout << a[i] << " ";

		}
	} cout << "}" << endl;

	//size of not union c union d
	cout << "5. N(!A union(C union D)): ";
	h = 0;
	j = 0;
	// gets not a and puts it into array newarr2
	for (int i = 0; i < 11; i++) {
		for (h = 0; h < 11; h++) {
			if (a[i] == a[h]) {
				break;
			}
		}
		if (h == 11) {
			newarr2[j] = a[i];     
			j++;

		}
	}

	// gets c union d and puts into array newarr2
	int size = 0;
	int num11 = 0;
	for (int i = 0; i < 5; i++)
	{
		newarr[i] = c[i];
		size++;

	}
	// compares newarr and newarr2
	int i = size;
	for (int i = 0; i < 6; i++)
	{
		num11 = 0;
		for (int j = 0; j < i; j++)
		{
			if (d[i] == c[j])
			{
				num11 = size;
				break;
			}
		}
		if (num11 == 0)
		{
			newarr[size] = d[i];
			size++;

		}
	}

	int numberof1 = 0;
	int o = 0;
	int num9 = 0;
	for (int i = 0; i < 6; i++)
	{
		final[i] = newarr[i];
		o++;

	}

	//gets matching number of elements
	int size1 = o;
	for (int i = 0; i < 6; i++)
	{
		num = 0;
		for (int j = 0; j < size1; j++)
		{
			if (newarr2[i] == newarr[j])
			{
				num9 = o;
				break;
			}
		}
		if (num9 == 0)
		{
			final[o] = newarr2[i];
			num_elements++;
		}
	}

	cout << num_elements << endl;


	// D intersect C:
	cout << "6. D intersect C: {";  
	// sees matching values for d and c
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (d[i] == c[j]) {
				cout << d[i] << " ";
			}

		}
	}
	cout << "}" << endl;


	// Size Of (B Intersect C)
	num_elements = 0;
	cout << "7. Size Of (B Intersect C): ";
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (b[i] == c[j]) {
				num_elements += sizeof(b[i]) / sizeof(b[i]);
			}
		}
	}
	cout << num_elements << endl;


	// A union B union C union D:
	cout << "8. A union B union C union D: {";
	int s = 0;
	num = 0;
	//repeating union and putting into new arrays
	for (int i = 0; i < 6; i++)
	{
		e[i] = b[i];
		l++;

	}
	int y = s;
	for (int i = 0; i < 10; i++)
	{
		num = 0;
		for (int j = 0; j < y; j++)
		{
			if (a[i] == b[j])
			{
				num = s;
				break;
			}
		}
		if (num == 0)
		{
			e[s] = a[i];
			s++;

		}
	}
	int r = 0;
	int num2;
	int New[10];
	for (int i = 0; i < 5; i++) {
		New[i] = c[i];
		r++;
	}
	int q = r;
	for (int i = 0; i < 10; i++) {
		num2 = 0;
		for (int j = 0; j < q; j++) {
			if (e[i] == c[j]) {
				num2 = r;
				break;
			}
		}
		if (num2 == 0) {
			New[r] = e[i];
			r++;
		}
	}
	int u = 0;
	int num3;
	int New2[10];
	for (int i = 0; i < 5; i++) {
		New2[i] = d[i];
		u++;
	}
	int p = u;
	for (int i = 0; i < 10; i++) {
		num3 = 0;
		for (int j = 0; j < p; j++) {
			if (New[i] == d[j]) {
				num3 = u;
				break;
			}
		}
		if (num3 == 0) {
			New2[u] = New[i];
			u++;
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << New2[i] << " ";
	} cout << "}" << endl;


	_getch();

}
