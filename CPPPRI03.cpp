#include <bits/stdc++.h>
using namespace std;

int Pr[10004] = {0};

int main()
{
	int t; cin>>t;
	Pr[1] = 1;
	Pr[0] = 1;
	for(int i = 2; i <= 10000; i++){
	    for(int j = i*2; j<=10000; j+=i){
	        Pr[j] = 1;
	    }
	}
	while(t--)
	{
		int n; cin>>n;
		for(int i = 2; i<=n; i++)
		{
			if(Pr[i] == 0) cout<<i<<" ";
		}
		cout<<endl;
	}
	
}