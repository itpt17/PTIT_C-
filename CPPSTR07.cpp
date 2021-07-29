#include <bits/stdc++.h>
using namespace std;

string cong(string a, string b){
    int du      = 0;
    int len1    = a.length();
    int len2    = b.length();
    string res  = "";
    if(len1 < len2){
        a.insert(0,len2-len1,'0');
    }else b.insert(0,len1-len2,'0');
    for(int i = a.length()-1; i>=0; i--){
        int tmp = (a[i] - '0' + b[i] - '0' + du);
        res = (char)(tmp%10 + '0') + res;
        du = tmp/10;
    }
    if(du>0) res = (char)(du + '0') + res;
    return res;
} // checked

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        string s1 = "";
        bool check = false;
        for(int i = 0; i < s.length()-i+1; i++){
            s1+=s[i];
            string s2 = "";
            for(int j = i+1; j < s.length()-s1.length(); j++){
                s2+=s[j];
                string ns1 = s1;
                string ns2 = s2;
                string tmp = ns1+ns2;
                while(tmp.length() < s.length()){
                    string news = cong(ns1,ns2);
                    tmp.append(news);
                    ns1 = ns2;
                    ns2 = news;
                }
                if(tmp == s){
                    check = true;
                    break;
                }
            }
            if(check) break;
        }
        if(check) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}