#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int res = 0;
		for(int i=2; i<=n; i++){
			int tmp = i;
			while(tmp%x==0){
				res++;
				tmp/=x;
			}
		}
		cout<<res<<endl;
	}
}
