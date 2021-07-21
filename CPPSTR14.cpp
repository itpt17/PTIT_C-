#include <bits/stdc++.h>
using namespace std;

int dem(string s){
	int count = 0;
	if(s[0] != ' ' && s[0] != '\t' && s[0] != '\n'){
		count++;
	}
	for(int i = 0; i < s.length()-1; i++){
		if(s[i] == ' ' || s[i] == '\t' || s[i] == '\n'){
			if(s[i+1] != ' ' && s[i+1] != '\t' && s[i+1]!= '\n'){
				count++;
			}
		}
	}
	return count;
}

int main(){
	int t; cin>>t;
	string s; 
	cin.ignore();
	while(t--){
		getline(cin,s);
		cout<<dem(s)<<endl;
	}
	return 0;
}