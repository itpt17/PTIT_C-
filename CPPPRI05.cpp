#include <bits/stdc++.h>
using namespace std;

int Pr[10005]={0};

int main(){
	int t; cin>>t;
	Pr[0] = 1;
	Pr[1] = 1;
	for(int i = 2; i<= 10000; i++ ){
		for(int j = 2*i ; j<=10000; j+=i){
		    Pr[j] = 1;
		}
	}
	while(t--){
		int n,m; cin>>n>>m;
		for(int i=min(m,n); i<= max(m,n); i++){
			if(Pr[i] == 0) cout<<i<<" ";
		}
		cout<<endl;
	}
}