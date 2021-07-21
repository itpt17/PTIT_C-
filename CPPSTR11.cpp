#include <bits/stdc++.h>
using namespace std;

string FindStr(string s1,string s2){
	int len1 = s1.length();
	int len2 = s2.length();
	string res = "-1";
	for(int i = 0; i < len1; i++){
		string tmp = s2;
		if(tmp.find(s1[i]) != -1){
			int Pos = tmp.find(s1[i]);
			string tmpStr = ""; tmpStr += s1[i];
			tmp.erase(Pos,1);
			int j = i+1;
			while(j < len1 && tmp.length() != 0){
					tmpStr += s1[j];
					if(tmp.find(s1[j]) != -1){
						Pos = tmp.find(s1[j]);
						tmp.erase(Pos,1);
					}
					j++;
			}
			if(tmp.size() > 0) return res;
			else if(res == "-1" || (res.length() > tmpStr.length())) 
			res = tmpStr;
		}
	}
	return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		string s1,s2; cin>>s1>>s2;
		cout<<FindStr(s1,s2)<<endl;
	}
}