/* Program to print the following pattern:
        *****
       *   *
      *   *
     *   *
    *****
*/

#include<iostream>
using namespace std;

int main()
{
    int rows,i,j;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=(rows-i);j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=rows;k++)
        {
            if(i==1 || i==rows || k==1 || k==rows)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}