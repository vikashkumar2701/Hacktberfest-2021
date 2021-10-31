#include<iostream>
using namespace std;
int a[12][10]={
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 0, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 0, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 0, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 0, 1, 1, 1, 1 },
        { 1, 0, 1, 1, 1, 1, 1, 1, 0, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 0, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 0, 1, 1, 1, 1, 1, 1 }
    };

bool isValid(int i, int j)
{
    return(i>=0 && i<12 && j>=0 && j<10);
}
void display()
{
	for(int i=0;i<12;i++)
	{
		for(int j=0;j<10;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl<<endl;
}
bool safe(int i, int j)
{
    if(isValid(i-1,j) && a[i-1][j] == 0)
    	return false;
    if(isValid(i+1,j) && a[i+1][j] == 0)
        return false;
    if(isValid(i,j+1) && a[i][j+1] == 0)
        return false;
    if(isValid(i,j-1) && a[i][j-1] == 0)
        return false;
    return true;
}
int minValue=INT_MAX;
void path(int n,int m,int i,int j,int c)
{
	cout<<c<<endl;
	if(!isValid(i,j) || a[i][j]==8 )
		return;
	if(j==m-1){
//		minValue=min(minValue,c);
		if(c<minValue)
		{
			minValue=c;
			display();
		}
		return;
	}
	if(safe(i,j))
	{
		a[i][j]=8;
		path(n,m,i,j+1,c+1);
		path(n,m,i+1,j,c+1);
		path(n,m,i-1,j,c+1);
		a[i][j]=1;
	}
}
void solve(int n, int m)
{
    for(int row=0;row<n;row++)
        path(n,m,row,0,0);
}

int main()
{
	solve(12,10);
	cout<<minValue;
	return 0;
}




