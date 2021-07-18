#include <bits/stdc++.h>
using namespace std;

long long m = 1e9+7;

long long Power(long long x,int y){
	if(y==0) return 1;
	if(y==1) return x%m;
	if(y%2 == 1) return (Power(x,y-1)*x)%m;
	long long tmp = Power(x,y/2);
	return (tmp*tmp)%m;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		long long hx=1;
		int gx,x;
		cin>>x;
		hx = x; gx = x;
		for(int i = 1; i < n; i++){
			cin>>x;
			hx = (hx*x)%m;
			gx = __gcd(gx,x);
		}
		cout<<Power(hx,gx)<<endl;
	}
}

