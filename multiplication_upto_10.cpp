#include<iostream>
using namespace std;

int main()
{
    int a, i, n=10, multiple=1;
    for(i=1;i<=n;i++)
    {
        for(a=1;a<=10;a++)
        {
            multiple=i*a;
            cout<<i<<" x "<<a<<" = "<<multiple<<"\n";
        }
    }
}