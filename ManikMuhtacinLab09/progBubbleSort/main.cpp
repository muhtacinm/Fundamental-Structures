#include <iostream>
using namespace std;

void bubblesort(int arr[], int size)
{
    int check = 0;
    int swaps = 0;
    int total;
    int temparray;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            check++;
            if (arr[j] > arr[j + 1])
            {
                temparray = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temparray;
                swaps +=3;

            }
        }
    }

    total=swaps + check;
    cout << "{";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i < (size - 1))
            cout << ", ";
    }
    cout << "} ";
    cout << "Done in " << total << " actions" << endl;

}

int main()
{
    int size;
    int arr1[] = { 1, 3, 7, 5, 2, 4, 6, 8, 9, 10 };
    int arr2[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int arr3[] = { 1, 10, 2, 9, 3, 8, 4, 7, 5, 6 };
    int arr4[] = { 7, 2, 15, 483, 34, 4, 8, 18, 6, 9, 2, 92, 7, 0, 12 };

    size = sizeof(arr1) / sizeof(int);
    cout << "Sorted Vector {1,3,7,5,2,4,6,8,9,10} = ";
    bubblesort(arr1, size);

    size = sizeof(arr2) / sizeof(int);
    cout << "Sorted Vector {10,9,8,7,6,5,4,3,2,1} = ";
    bubblesort(arr2, size);

    size = sizeof(arr3) / sizeof(int);
    cout << "Sorted Vector {1,10,2,9,3,8,4,7,5,6} = ";
    bubblesort(arr3, size);

    size = sizeof(arr4) / sizeof(int);
    cout << "Sorted Vector {7,2,15,483,34,4,8,18,6,9,2,92,7,0,12} = ";
    bubblesort(arr4, size);

    return 0;
}
