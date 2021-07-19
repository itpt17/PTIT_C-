#include <bits/stdc++.h>
using namespace std;

int sum(int n){
	int res = 0;
	while(n > 0){
		res += n%10;
		n    = n/10;
	}
	return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		bool isPrime = true;
		int  sumPrime= 0;
		int  sumN    = sum(n);
		for(int i = 2; i<=sqrt(n); i++){
			if(n%i==0){
				isPrime = false;
				while(n%i==0){
					sumPrime+=sum(i);
					n/=i;
				}
			}
		}
		if(n>1) sumPrime+=sum(n);
		if(isPrime) cout<<"NO\n";
		else{
			if(sumN == sumPrime) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
}
