#include<bits/stdc++.h>
#define int long long
using namespace std;
inline char getc(int x){
	if(x>=0&&x<=9) return x+'0';
	else return x+'A'-10;
}
char ans1[100009],ans2[100009];
int tp1,tp2;
inline void solve(string str){
	tp1=0,tp2=0;
	string _in=str+".in";
	string _out=str+".out";
	ofstream fout_in(_in.c_str());
	ofstream fout_out(_out.c_str());
	int xx;
	for(int i=1;i<=rand();i++) xx=rand();
	mt19937_64 sss(rand());
	for(int i=1;i<=rand();i++) xx=sss();
	int ans=sss()%1000001;
	int n=sss()%15,m=sss()%15;
	n+=2,m+=2;
	int v=ans;
	while(v){
		ans1[++tp1]=getc(v%n);
		v/=n;
	}
	v=ans;
	while(v){
		ans2[++tp2]=getc(v%m);
		v/=m;
	}
	fout_in<<n<<'\n';
	for(int i=tp1;i>=1;i--) fout_in<<ans1[i];
	fout_in<<'\n';
	fout_in<<m<<'\n';
	for(int i=tp2;i>=1;i--){
		fout_out<<ans2[i];
	}
	fout_in.close();
	fout_out.close();
}
signed main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	//int _=1;
	//cin>>_;
	//while(_--){
	//	solve();
	//}
	srand(time(0));
	solve("F1");
	solve("F2");
	solve("F3");
	solve("F4");
	solve("F5");
	solve("F6");
	solve("F7");
	solve("F8");
	solve("F9");
	solve("F10");
	solve("F11");
	solve("F12");
	solve("F13");
	solve("F14");
	solve("F15");
	solve("F16");
	solve("F17");
	solve("F18");
	solve("F19");
	solve("F20");
	return 0;
}
