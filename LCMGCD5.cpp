#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long a,x,y;
        cin>>a>>x>>y;
        long long n = __gcd(x,y);
        for(int i = 1; i<=n; i++) cout<<a;
        cout<<endl;
    }
}