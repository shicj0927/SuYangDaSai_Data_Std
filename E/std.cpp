#include<bits/stdc++.h>
using namespace std;
int main(){
    
        int n;
      cin>>n;
        int ans=0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            ans^=x;
        }
        if(!ans) cout<<"NO\n";
        else cout<<"YES\n";
    
    return 0;
}
