#include <iostream>
#include <cmath>
#include <conio.h>


using namespace std;

//function prototypes used sz to indicate the size of array as one set was 6 and the other was 7
void f1(double a1[], double temp[], int sz);
void f2(double a1[], double temp[], int sz);
void inversef1(double a1[], int sz);
void inversef2(double a1[], int sz);
void printans(double temp[], int sz);

//temp array
double temp1[7];


int main()
{
    //sets
    double s1[6] = { 0, 2, 4, 6, 8, 10 };
    double s2[7] = { 1,5,10,15,25,50,100 };

    //prints set 1 and s2
    cout << "S1: ";
    printans(s1, 6);

    cout << "S2: ";
    printans(s2, 7);

    //f(x)
    cout << "\nf(x) on s1: ";
    f1(s1, temp1, 6);
    printans(temp1, 6);
    cout << "f`(x) on f(s1): ";
    inversef1(temp1, 6);
    printans(temp1, 6);
    cout << "f(x) on s2: ";
    f1(s2, temp1, 7);
    printans(temp1, 7);
    cout << "f`(x) on f(s2): ";
    inversef1(temp1, 7);
    printans(temp1, 7);

    //g(x)
    cout << "\ng(x) on s1: ";
    f2(s1, temp1, 6);
    printans(temp1, 6);
    cout << "g`(x) on g(s1): ";
    inversef2(temp1, 6);
    printans(temp1, 6);
    cout << "g(x) on s2: ";
    f2(s2, temp1, 7);
    printans(temp1, 7);
    cout << "g`(x) on g(s2): ";
    inversef2(temp1, 7);
    printans(temp1, 7);

    //h(x)
    cout << "\nh(x) on s1: ";
    f2(s1, temp1, 6);
    f1(temp1, temp1, 6);
    printans(temp1, 6);
    cout << "h`(x) on h(s1): "; // for the inverse of h1 i took the the inverse of f(x) first then computed that in g(x)
    inversef1(temp1, 6);
    inversef2(temp1, 6);
    printans(temp1, 6);
    cout << "h(x) on s2: ";
    f2(s2, temp1, 7);
    f1(temp1, temp1, 7);
    printans(temp1, 7);
    cout << "h`(x) on h(s2): "; // for the inverse of h1 i took the the inverse of f(x) first then computed that in g(x)
    inversef1(temp1, 7);
    inversef2(temp1, 7);
    printans(temp1, 7);

    _getch();



}

//f(x) function
void f1(double a1[], double temp[], int sz) {
    double param, result;
    for (int j = 0; j < sz; j++) {
        param = a1[j];
        result = (param*param*param) + 1;
        temp[j] = result; //stores in temp array
        temp1[j] = result;
    }

}

//g(x) function
void f2(double a1[], double temp[], int sz) {
    double param, result;
    for (int j = 0; j < sz; j++) {
        param = a1[j];
        result = sqrt(param) - 5;
        temp[j] = result;
    }

}


//inverse of f(x)
void inversef1(double temp[], int sz) {
    double param, result, raised, root;
    for (int j = 0; j < sz; j++) {
        param = temp[j];
        result = cbrt(param - 1);
        temp[j] = result; //stores in temp array
    }
}

//inverse of g(x)
void inversef2(double temp[], int sz) {
    double param, result;
    for (int j = 0; j < sz; j++) {
        param = temp[j];
        result = (param*param) + (10 * param) + 25;
        temp[j] = result; //stores in temp array
    }
}

//prints the temp array from each function then clears the temp array
void printans(double temp[], int sz) {
    cout << "[ ";
    for (int i = 0; i < sz; i++) {
        cout << temp[i];
        if (i < (sz - 1)) //did this so the last comma doesnt appear in the output
            cout << ", ";


    }
    cout << " ]" << endl;
    temp[sz] = 0; // resets temparray
    temp1[sz] = 0; // resets temparray

}
