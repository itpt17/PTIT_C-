#include <bits/stdc++.h>
using namespace std;

char lower(char c){
    if(c >= 'A' && c <= 'Z') c+=32;
    return c;
}

char upper(char c){
    if(c >= 'a' && c <= 'z') c-=32;
    return c;
}

int main(){
    string s; getline(cin,s);
    string lname  =  "";
    string fname  =  ""; 
    while(s[0] == ' ' && s.length() > 1) 
    s.erase(0,1);
    while(s[s.length()-1] == ' ' && s.length() > 1) 
    s.erase(s.length()-1,1); 
    int j = s.length()-1;
    int i = 0;
    // lay ra ten
    while(s[j] != ' '){
        lname = upper(s[j]) + lname;
        j--;
    }
    // lay ra ho va ten dem
    while(i < j){
        if(s[i] != ' ') {
            if(s[i-1] == ' ' || i == 0) fname += upper(s[i]);
            else fname += lower(s[i]);
        }else{
            if(s[i+1] != ' ') fname+=s[i];
        }
        i++;
    }
    cout<<fname<<", "<<lname;
}