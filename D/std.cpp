
#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[1000009],b[1000009];
int kmp[1000009],jj[1000009];
int dang[1000009],tp;
string s;
string biao[7]={"","a","e","i","o","u"};
signed main(){
	cin>>s;
	int nn=s.size();
	for(int i=0;i<nn;i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') continue;
		cout<<s[i];
	}
	return 0;
}
