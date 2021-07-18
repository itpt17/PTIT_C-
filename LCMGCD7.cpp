#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll Find(ll x, ll y, ll z, ll n){
    ll temp = x*y/__gcd(x,y);
    ll minVal = pow(10,n-1);
    ll tLCM = temp*z/__gcd(temp,(ll)z);
    if(tLCM > minVal*10) return -1;
    temp = minVal/tLCM;
    if(temp*tLCM < minVal) return (temp+1)*tLCM;
    return temp*tLCM;
}

int main(){
    int t; cin>>t;
    while(t--){
        ll x,y,z,n;
        cin>>x>>y>>z>>n;
        cout<<Find(x,y,z,n)<<endl;
    }
}