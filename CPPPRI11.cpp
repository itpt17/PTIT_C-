#include <bits/stdc++.h>
using namespace std;

/*
    Với điều kiện i là số nguyên tố, và 2^i - 1 cũng là số nguyên tố
    thì ta được 1 số đẹp là: n = 2 ^ (i-1) * (2 ^ i - 1);
    tham khảo : https://en.wikipedia.org/wiki/Perfect_number
*/

map <long long, bool> beauty;

bool isPrime(long long n){
    if(n<2) return false;
    for(int i = 2; i <= sqrt(n) ; i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    for(int i = 2; i <= 19; i++){
        long long tmp = pow(2,i)-1;
        if(isPrime(i) && isPrime(tmp)){
            beauty[(tmp+1)/2*tmp] = true;
        }
    }
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        if(beauty[n]) cout<<1<<endl;
        else cout<<0<<endl;
    }
}

