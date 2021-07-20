#include <bits/stdc++.h>
using namespace std;

int FindMinPr(int n){
	for(int i = 2; i<=sqrt(n); i++){
		if(n%i==0){
			return i;
		}
	}
	return n;
}
			
int main(){
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		for(int i=1; i<=n; i++){
			cout<<FindMinPr(i)<<" ";
		}
		cout<<endl;
	}
}