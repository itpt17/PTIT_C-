#include <bits/stdc++.h>
using namespace std;

long long a,b;

int main(){
	int t; cin>>t;
	while(t--)
	{
		cin>>a>>b;
		int gcd = __gcd(a,b);
		long long lcm = (a*b)/gcd;
		cout<<lcm<<" "<<gcd<<endl;
	}
}
