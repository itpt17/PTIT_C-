#include <bits/stdc++.h>
using namespace std;

int ModFor5(int n, int k)
{
	if(k==0) return 1;
	if(k==1) return n%5;
	if(k%2==1) return (n*ModFor5(n,k-1))%5;
	int tmp = ModFor5(n,k/2);
	return (tmp*tmp)%5;
}	
	
int main()
{
	int t; cin>>t;
	while(t--)
	{
		string s; cin>>s;
		int res = 0;
		for(int i = 0; i< s.length(); i++)
		{
			if(s[i] == '1')
			{
				res = (res + ModFor5(2,s.length()-i-1))%5;
			}
		}
		res == 0 ? cout<<"Yes"<<endl : cout<<"No"<<endl;
	}
}