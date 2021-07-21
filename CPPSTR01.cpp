#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int k   ; cin>>k;
        map<char,int> appear;
        int disApp = 26;
        for(int i = 0; i < s.length(); i++){
            if(appear[s[i]] == 0){
                appear[s[i]] = 1;
                disApp--;
            }
        }
        if(s.length() >= 26 && disApp <= k) cout<<1<<endl;
        else cout<<0<<endl;
    }
}