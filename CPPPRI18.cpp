#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int m,n,a,b;
		cin>>m>>n>>a>>b;
		int l = min(m,n);
		int r = max(m,n);
		int c = a*b/__gcd(a,b);
		int count = 0;
		for(int i = l; i<=r; i++){
			if(i%c == 0){
				count++;
				continue;
			}
			if(i%a == 0) count++;
			if(i%b == 0) count++;
		}
		cout<<count<<endl;
	}
}
