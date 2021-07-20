#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> res;
        for(int i = 2; i<=sqrt(n); i++){
            while(n%i==0){
                n/=i;
                res.push_back(i);
            }
        }
        if(n>1) res.push_back(n);
        if(k > res.size()) cout<<-1<<endl;
        else cout<<res[k-1]<<endl;
    }
}