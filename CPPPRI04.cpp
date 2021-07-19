#include <bits/stdc++.h>
using namespace std;

int minPr[10001];

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
	for(int i =1; i<=10000; i++){
		minPr[i] = FindMinPr(i);
	}
	while(t--){
		int n; cin>>n;
		for(int i=1; i<=n; i++){
			cout<<minPr[i]<<" ";
		}
		cout<<endl;
	}
}