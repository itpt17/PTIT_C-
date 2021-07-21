#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int MAX = 0;
		int len = s.length();
		while(s.length() != 0){
			char c = s[0];
			int count = 0;
			while(s.find(c) != -1){
				count++;
				s.erase(s.find(c),1);
			}
			MAX = max(MAX,count);
		}
		if(len-MAX >= MAX - 1) cout<<1;
		else cout<<0;
		cout<<endl;
	}
}
