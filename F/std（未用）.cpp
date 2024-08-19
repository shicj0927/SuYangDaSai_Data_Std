#include<bits/stdc++.h>
using namespace std;
inline int getz(char x){
	if(x>='0'&&x<='9') return x-'0';
	else return x-'A'+10;
}
inline char getc(int x){
	if(x<=9) return x+'0';
	return x-10+'A';
}
char aans[100009];
int tp;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int nn=s.size();
    int ans=0;
    for(int i=0;i<nn;i++){
    	ans=ans*n+getz(s[i]);
	}
	int m;
	cin>>m;
	while(ans){
		aans[++tp]=getc(ans%m);
		ans/=m;
	}
	for(int i=tp;i>=1;i--){
		cout<<aans[i];
	}
    return 0;
}
