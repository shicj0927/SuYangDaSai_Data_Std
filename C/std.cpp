
#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[1000009];
inline void solve(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int id,x;
		cin>>id>>x;
		a[id]=x;
	}
	int q;
	cin>>q;
	while(q--){
		int id;
		cin>>id;
		cout<<a[id]<<'\n';
	}
}
signed main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	int _=1;
	//cin>>_;
	while(_--){
		solve();
	}
	return 0;
}
