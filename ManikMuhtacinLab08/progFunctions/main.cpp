#include<iostream>
using namespace std;

//iterative factorial function
long long iterativeFAC(int n)
{
    long long ans=1;
    int i;
    for(i=1;i<=n;i++)
    ans=ans*i;
    return ans;
}

//recursive factorial function
long long recursiveFAC(int n) {
   if (n==0)
      return 1;
   else
      return n*recursiveFAC(n-1);
}


//iterative GCD function
long long iterativeGCD(int n,int n1){
long long gcd;
for(int i=1; i<=n && i<=n1; i++){
    if(n%i==0 && n1%i==0)
    gcd=i;
}
    return gcd;
}

//recursive GCD function
long long recursiveGCD(int n,int n1){
    if(n1 == 0)
        return n;
    else
        return (recursiveGCD(n1, n%n1));

}

//iterative Power function
long long iterativePower(int n,int power){
long long ans=1;
for(int i=0;i<power;i++)
    ans=ans * n;

    return ans;
}

//recursive Power function
long long recursivePower(int n,int power){
    if(power ==0)
        return 1;
    else
        return (n* recursivePower(n,power-1));
}


int main()
{
    cout << "Iterative Factorial 9 " <<
    iterativeFAC(9);
    cout << "\nRecursive Factorial 9 " <<
    recursiveFAC(9);
    cout << endl;

    cout << "Iterative Factorial 14 " <<
    iterativeFAC(14);
    cout << "\nRecursive Factorial 14 " <<
    recursiveFAC(14);
    cout << endl;

    cout << "Iterative Power of 6^12 " <<
    iterativePower(6,12);
    cout << "\nRecursive Power of 6^12 " <<
    recursivePower(6,12);
    cout << endl;

    cout << "Iterative Power of 2^24 " <<
    iterativePower(2,24);
    cout << "\nRecursive Power of 2^24 " <<
    recursivePower(2,24);
    cout << endl;

    cout << "Iterative GCD(325,481) " <<
    iterativeGCD(325,481);
    cout << "\nRecursive GCD(325,481) " <<
    recursiveGCD(325,481);
    cout << endl;

    cout << "Iterative GCD(203,2523) " <<
    iterativeGCD(203,2523);
    cout << "\nRecursive GCD(203,2523) " <<
    recursiveGCD(203,2523);
    cout << endl;


    return 0;
}




