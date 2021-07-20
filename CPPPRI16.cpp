#include <bits/stdc++.h>
using namespace std;

int tPrime[1000005] = {0};

bool isPrime(int n){
	if(n<2) return false;
	for(int i = 2; i<= sqrt(n); i++){
		if(n%i==0) return false;
	}
	return true;
}


int main(){
	int t; cin>>t;
	for(int i = 2; i <= 1000000 ; i++){
	    if(!isPrime(i)) tPrime[i] = tPrime[i-1];
	    else tPrime[i] = tPrime[i-1]+1;
	}
	while(t--){
		long long n;
		cin>>n;
		n = sqrt(n);
		cout<<tPrime[n]<<endl;
	}
}