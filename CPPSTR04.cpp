#include <bits/stdc++.h>
using namespace std;

int CountNumber(string s, int n)
{
	int count=0,du=0;
	for(int i = 0; i<s.length(); i++)
	{
		du=0;
		for(int j = i; j<s.length(); j++)
		{
			du = (du*10 + s[j] - '0')%n;
			if(du==0) count++;
		}
	}
	return count;
}

int main()
{
	int t; cin>>t;
	while(t--)
	{
		string s; cin>>s;
		cout<<CountNumber(s,8)-CountNumber(s,24)<<endl;
	}
}
