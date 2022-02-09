#include <iostream>
#include <limits.h>

using namespace std;

/* WHAT THIS MYSTERY FUNCTION DOES IS THAT IT TAKES A NUMBER AND IF IT IS EVEN AND GREATER THAN 1 IT DIVIDES IT BY 2 UNTIL IT REACHES THE CONDITION.
    IF IT IS AN ODD NUMBER AND GREATER THAN 1 IT MULTIPLIES IT BY 2 AND ADDS ONE TO IT MAKING THE NUMBER AN ODD INTEGER UNTIL IT REACHES THE CONDITION.
     */
void mysteryfunction(int num){
while(num > 1){

    (num % 2 == 0) ? num=num/2 : num=(2*num)+1;

}
cout << "Mystery Function returns " << num; //the final result is a number that is less than or equal to 1
}


void func1(int x) {
    (x % 3 != 0) ? cout << "\ndiv3 on " << x << " gives " << x : cout << "\ndiv3 on " << x << " gives " << INT_MIN;
}

void func2(int x, int y) {
	(x > y) ? cout << "\ndiff on " << x << " and " << y << " gives " << x - y : cout << "\ndiff on " << x << " and " << y << " gives " << INT_MIN;

}

void func3(int l, int m, int n) {
	(l < m && m < n) ? cout << "\nbetween on " << l << "," << m << "," << n << " gives " << m
	:  cout << "\nbetween on " << l << "," << m << "," << n << " gives " << INT_MIN;

}
int main() {

    mysteryfunction(2);
	func1(7);
	func1(15);
	func2(17, 4);
	func2(1, 10);
	func3(2, 7, 23);
	func3(14, 3, 18);


	return 0;
}

