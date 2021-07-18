#include <bits/stdc++.h>
using namespace std;

long long operator % (long long a, string b){
	long long MOD= 0;
	for(int i = 0; i < b.length(); i++){
		MOD= (MOD*10 + b[i] - '0')%a;
	}
	return MOD;
}

int main(){
	int t; cin>>t;
	while(t--){
		long long a;
		string b;
		cin>>a>>b;
		cout<<__gcd(a,a%b)<<endl;
	}
}
