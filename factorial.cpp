/* Program to print the factorial of number upto n */

#include<iostream>
using namespace std;

void Factorial(int factnum)
{
    int fact=1;
    for(int i=factnum; i>=2; i--)
    {
        fact*=i;
    }
    cout<<"The factorial of the given number is: "<<fact;
    return;
}

int main()
{
    int num;
    cout<<"Enter the number of which you want to calculate the factorial: ";
    cin>>num;

    Factorial(num);
}