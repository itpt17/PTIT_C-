#include <bits/stdc++.h>
using namespace std;

string Analysis(long long n, long long m){
	long long sum = n*(n+1)/2;
	if((sum + m) % 2 != 0) return "No";
	long long x1 = (sum+m)/2;
	long long x2 = sum - x1;
	if(__gcd(x1,x2) == 1) return "Yes";
	return "No";
}

int main(){
	int t; cin>>t;
	while(t--){
		long long n,m;
		cin>>n>>m;
		cout<<Analysis(n,m)<<endl;
	}
}
