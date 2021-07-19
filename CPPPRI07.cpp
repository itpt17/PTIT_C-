#include <bits/stdc++.h>
using namespace std;

int Analysis(int n){
    int quan = 3;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            n/=i;
            if(n%i==0) return 0;
            else{
                quan--;
                if(quan < 0) return 0;
            }
        }
    }
    if(quan == 0 && n == 1) return 1;
    if(n > 1 && quan == 1) return 1;
    return 0;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<Analysis(n)<<endl;
    }
}