#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--)
	{
		string s; cin>>s;
		int res = -1;
		int num = 0;
		for(int i = 0; i<s.length(); i++)
		{
			if(isdigit(s[i]))
			{
				if(i==s.length()-1)
				{
					num = num*10 + s[i]-'0';
					res = max(res,num);
				}
				else num = num*10 + (s[i]-'0');
			}
			else
			{
				res=max(res,num);
				num = 0;
			}
		}
		cout<<res<<endl;
	}
}