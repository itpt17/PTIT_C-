#include <bits/stdc++.h>
using namespace std;

long long paserInt(string a)
{
	long long res = 0;
	for(int i = 0; i<a.length(); i++)
	{
		res = res*10 + a[i]- '0';
	}
	return res;
}

int main()
{
	int t; cin>>t;
	while(t--)
	{
		string a,b; cin>>a>>b;
		string amax=a,amin = a, bmax=b, bmin = b;
		for(int i = 0; i<a.length(); i++)
		{
			if(a[i]=='5') amax[i]='6';
			else if(a[i]=='6') amin[i]='5';
		}
		for(int i = 0; i< b.length(); i++)
		{
			if(b[i]=='5') bmax[i]='6';
			else if(b[i]=='6') bmin[i]='5';
		}
		long long MAX = paserInt(amax) + paserInt(bmax);
		long long MIN = paserInt(amin) + paserInt(bmin);
		cout<<MIN<<" "<<MAX<<endl;
	}
}
