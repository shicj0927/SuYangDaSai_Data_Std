#include<bits/stdc++.h>
#define int long long
using namespace std;
inline void solve(){
	int n,m,d=0,ans=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		if(d+x<=m) d+=x;
		else d=x,ans++;
	}
	
	cout<<ans;
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
