#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

//function prototypes
int comsize(int x, int y);
int factorial(int x);
void combination(char set[], int x, int y, int index, char data[], int i);
void printcom(char set[], int x, int y);

int main()
{

    //set
    char set[] = {'A', 'B','C', 'D', 'E'};

    cout << "Size 0"  << ": " << comsize(5,0) <<endl;
    printcom(set, 5, 0);
    cout << endl;

    cout << "Size 1 " << ": " << comsize(5,1) <<endl;
    printcom(set, 5, 1);
    cout << endl;

    cout << "Size 2" << ": " << comsize(5,2) <<endl;
    printcom(set, 5, 2);
    cout << endl;

    cout << "Size 3" << ": " << comsize(5,3) <<endl;
    printcom(set, 5, 3);
    cout << endl;

    cout << "Size 4 " << ": " << comsize(5,4) <<endl;
    printcom(set, 5, 4);
    cout << endl;

    cout << "Size 5"  << ": " << comsize(5,5) <<endl;
    printcom(set, 5, 5);
    cout << endl;

    return 0;
}

//recursive factorial function
int factorial(int x)
{
    if(x > 1)
        return x * factorial(x - 1);
    else
        return 1;
}

// returns the number of  size, and resulting
// items of combinations
int comsize(int x, int y)
{
    int number;
    number = (factorial(x))/((factorial(y))*factorial(x-y));
    return number;
}

// print function which calls on the combination function
void printcom(char set[], int x, int y)
{
    char data[y];
    combination(set, x, y, 0, data, 0);
}

// combination function which returns the sets
void combination(char set[], int x, int y, int index, char data[], int i)
{
    if (index == y)
    {
        cout << "{";
        for (int j = 0; j < y; j++){
            cout << data[j];
             if (j < (y - 1))
                cout << ",";
        }
        cout << "}";

        return;

    }

    if (i >= x)
        return;

    data[index] = set[i];
    combination(set, x, y, index + 1, data, i + 1);
    combination(set, x, y, index, data, i+1);

}


