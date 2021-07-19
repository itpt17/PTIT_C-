#include<bits/stdc++.h>
using namespace std;

int Pr[10004] = {0};

void FindCouple(int n){
    for(int i = 2; i <= n/2; i++){
            if(Pr[n-i] == 0 && Pr[i]==0){
                cout<<i<<" "<<n-i<<endl;
                return;
            }
        }
}

int main(){
    int t; cin>>t;
    Pr[0] = 1;
    Pr[1] = 1;
    for(int i = 2; i<=10000; i++){
        for(int j = 2*i; j<=10000; j+=i){
            Pr[j] = 1;
        }
    }
    while(t--){
        int n; cin>>n;
        FindCouple(n);
    }
}