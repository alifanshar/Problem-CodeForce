#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    int a=0, b=0;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        if(x==1) a++;
        else b++;
    }
    int ans=0;
    if(b%2==1) b--, a++, ans++;
    int x=(b-a+1)/2;
    if(a<b) ans+=x, b-=x;
    if(x%2==1) ans++;
    cout << ans;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}