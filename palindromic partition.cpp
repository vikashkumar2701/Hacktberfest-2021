#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string String, int i, int j)
{
    while(i < j)
    {
      if(String[i] != String[j])
        return false; 
      i++;
      j--;
    }
    return true;
}
int palindromePartition(string s,int i,int j)
{
	if(i>=j)
		return 0;
	if(isPalindrome(s,i,j))
		return 0;
	int ans=-1;
	for(int k=i;k<=j-1;k++)
	{
		int temp=palindromePartition(s,i,k)+palindromePartition(s,k+1,j)+1;
		ans=max(ans,temp);
	}
	return ans;
}
int main()
{
	string s="abcde";
	cout<<palindromePartition(s,0,s.length()-1);
	return 0;
}
