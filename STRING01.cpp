#include <bits/stdc++.h>
using namespace std;

int main(){
		string s1,s2;
		getline(cin,s1);
		cin>>s2;
		while(s1.find(s2) != -1){
			int i = s1.find(s2);
			s1.erase(i,s2.length());
		}
		cout<<s1;
}