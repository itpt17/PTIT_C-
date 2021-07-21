#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--)
	{
		string s; cin>>s;
		int res = 0;
		int num = 0;
		for(int i = 0; i<s.length(); i++)
		{
			if(isdigit(s[i]))
			{
				num = num*10 + s[i] - '0';
				if(i== s.length()-1) res+=num;
			}
			else
			{
				res+= num;
				num = 0;
			}
		}
		cout<<res<<endl;
	}
}