#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int t; cin >> t;
    string a; cin >> a;
    a=' '+a;

    vector<int> ans(n+1, 0);
    for(int i=1;i<=n;i++) ans[i]=ans[i-1]+a[i]-('a'-1);

    while(t--){
        int l, r; cin >> l >> r;
        cout << ans[r]-ans[l-1] << '\n';
    }

    return 0;
}