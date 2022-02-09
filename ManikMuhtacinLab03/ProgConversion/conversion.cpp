#include <conio.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int binary[14];
void convertBinary(int n)
{
	// array that stores number
	int binaryNum[32];

	// counter that utilizes an array size
	int size = 0;
	while (n > 0) {

		// stores the reminder from binary in an array
		binaryNum[size] = n % 2;
		n = n / 2;
		size++;
	}

	// couts the array in the reverse order
	for (int j = size - 1; j >= 0; j--) {
		binary[j] = binaryNum[j];
		cout << "" << binaryNum[j] << "";
	}
	cout << "|";

}



void convertHexa(int n)
{
	// array that stores number
	char hexanum[100];

	// counter that utilizes an array size
	int size = 0;
	while (n != 0)
	{
		// temporary variable 0
		int temporary = 0;

		// storing remainder the temporaryorary variable
		temporary = n % 16;

		if (temporary < 10)
		{
			hexanum[size] = temporary + 48;
			size++;
		}
		else
		{
			hexanum[size] = temporary + 55;
			size++;
		}

		n = n / 16;
	}

	// couts the array in the reverse order
	for (int j = size - 1; j >= 0; j--)
		cout << hexanum[j];
	cout << "|";

}

string addBinary1(string bin1, string bin2) {
	string result = "";
	int s = 0;
	int size = bin1.length() - 1, j = bin2.length() - 1;
	while (size >= 0 || j >= 0 || s == 1) {
		if (size >= 0)
			s += bin1[size] - '0';
		else
			s += 0;
		if (j >= 0)
			s += bin2[j] - '0';
		else
			s += 0;
		result = char(s % 2 + '0') + result;
		s /= 2; //get the carry
		size--; j--;
	}
	return result;
}
string addBinary2(string arr[], int n) {
	string result = "";
	for (int size = 0; size < n; size++)
		result = addBinary1(result, arr[size]);
	return result;
}


int main() {

	int sum = 0;
	int size = 0;
	int num[14];
	ifstream file("input.txt");
	if (file.is_open())
	{

		for (int size = 0; size < 14; ++size)
		{
			file >> num[size];


		}
		file.close();

	}
	//gets array a
	cout << "A: ";
	for (int size = 0; size < 14; size++)
	{
		cout << " " << num[size] << " |";
	}
	cout << endl;

	// binary conversion
	cout << "B: ";
	for (int size = 0; size < 14; size++)
	{
		convertBinary(num[size]);
	}
	cout << endl;

	// hexa conversion
	cout << "C: ";
	for (int size = 0; size < 14; size++)
	{
		convertHexa(num[size]);
	}
	cout << endl;

	//  adding decimal
	sum = 0;
	cout << "D: ";
	for (int size = 0; size < 14; size++)
	{
		sum += num[size];
	}
	cout << sum << endl;

	//adding binary numbers. i wasnt sure how to do this but i got help from another classmate and did it this way
	cout << "E: ";
	string arr[] = { "101", "1001", "11000" , "10", "100111", "1010011", "111100", "1000", "1011", "1010", "110", "10010", "11111", "11011" };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << addBinary2(arr, n) << endl;

	// im not sure how to do this I don't recall learning adding hex numbers in out 1500 lectures
	cout << "F: "; 
	convertHexa(sum);


	_getch();


}
