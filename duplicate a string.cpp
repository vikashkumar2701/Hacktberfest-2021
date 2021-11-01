#include<iostream>
using namespace std;
string duplicate(string s)
{
	if(s.length()==0)
		return "";
	string s1 = duplicate(s.substr(1));
	if(s[0]==s1[0])
		return s1;
	else
		return s[0]+s1;
}
int main()
{
	string s="aaabbcdddeeeee";
	string ans = duplicate(s);
	cout<<ans;
	return 0;
}
