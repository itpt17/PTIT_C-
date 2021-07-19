#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
	    long long n; cin>>n;
	    long res;
	    for(int i = 2; i<=sqrt(n); i++)
	    {
    		if(n%i==0)
    		{
    			while(n%i==0)
    			{
    				n/=i;
    			}
    			res = i;
    		}
	    }
    	if(n > 1) res = n;
    	cout<<res<<endl;
	}
}