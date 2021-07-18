#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--)
	{
		int a; cin>>a;
		long long lcm = 1;
		for(int i=2; i<=a; i++)
		{
			lcm = lcm*i / __gcd(lcm,(long long)i);	
		}
		cout<<lcm<<endl;
	}
}
