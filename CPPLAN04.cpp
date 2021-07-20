#include <bits/stdc++.h>
using namespace std;

void Reset(string &a){
	while(a[0]=='0' && a.length()>1){
		a.erase(a.begin(),a.begin()+1);
	}
}

bool operator < (string a, string b)
{
    if(a.length() < b.length())
        return true;
    if(a.length() > b.length())
        return false;
    for(int i = 0; i < a.length(); i++)
        if(a[i] < b[i]) return true;
        else if(a[i] > b[i]) return false;
    return false;
}

string operator - (string a, string b){
	string big = b,small = a,ans="";
	int rmb = 0;
	if(b < a){
		small = b;
		big   = a;
	}
	if(small.length() < big.length()) small.insert(0,big.length()-small.length(),'0');
	for(int i = big.length()-1; i>=0; i--){
		int res;
		if(big[i] - rmb - small[i] < 0)
		{
			res = big[i] + 10 - rmb - small[i];
			rmb = 1;
		}else{
			res = big[i] - rmb - small[i];
			rmb = 0;
		}
		ans.insert(0,1,res+'0');
	}
    Reset(ans);
	return ans;
}

// string operator + (string a, string b){
// 	int free = 0;
// 	string res = "";
// 	if(a.length() < b.length())
// 	{
// 		a.insert(0,b.length()-a.length(),'0');
// 	}else b.insert(0,a.length()-b.length(),'0');
// 	for(int i = a.length()-1; i>=0; i--){
// 		free = (a[i]-'0') + free + b[i]-'0';
// 		res.insert(0,1,free%10 + '0');
// 		free/=10;	
// 	}
// 	if(free>0) res.insert(0,1,'1');
// 	return res;
// }

string operator * (string a, int b){
	int rmb = 0;
	string res = "";
	for(int i = a.length()-1; i>=0; i--){
		rmb = (a[i]-'0')*b + rmb;
		res.insert(0,1,rmb%10 + '0');
		rmb/=10;
	}
	if(rmb>0) res.insert(0,1,rmb+'0');
	Reset(res);
	return res;
}

// string operator * (string a, string b){
// 	string res = "0";
// 	string tmp = "";
// 	for(int i = a.length()-1; i>=0; i--)
// 	{
// 		int k = a[i]-'0';
// 		tmp = b*k;
// 		tmp.insert(tmp.end(),(a.length()-1)-i,'0');
// 		res = res + tmp;
// 	}
// 	Reset(res);
// 	return res;
// }

string operator / (string a, string b){
	if(a < b) return "0";
	if(a == b) return "1";
	string tmp = "";
	string ans = "";
	int i = 0;
	tmp.push_back(a[i]);
	while(tmp < b){
		i++;
		tmp.push_back(a[i]);
	}
	while(i<=a.length()-1){
		int near;
		int res;
		if(tmp.length()>b.length()){
			near = (tmp[0] - '0')*10 + tmp[1] - '0';					
		}
		else if(tmp.length() == b.length())
		{
			near = tmp[0]-'0';
		}else near = 0;
		res = near/(b[0]-'0');
		string tmp1 = b*res;
		while(tmp < tmp1){
			res--;
			tmp1 = b*res;
		}
		ans.push_back(res+'0');
		tmp = tmp - tmp1;
		Reset(tmp);
		tmp.push_back(a[i+1]);
		i++;
	}
	return ans;
}

int main(){
	int t; cin>>t;
	while(t--){
		string a,b; cin>>a>>b;
		cout<<a+b<<endl;
	}
}
