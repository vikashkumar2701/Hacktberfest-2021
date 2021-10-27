/* Program to print the following pattern:
          1
        1   2
      1   2   3  
    1   2   3   4
*/

#include<iostream>
using namespace std;

int main()
{
    int rows,j;
    cout<<"Enter number of rows: ";
    cin>>rows;

    for(int i=1; i<=rows; i++)
    {
        int k=1;
        for(j=1;j<=rows-i;j++)
        {
            cout<<" ";
        }
        for(;j<=rows;j++)
        {
            cout<<k<<" ";
            k++;
        }
        for(;j<=(2*rows-1);j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}