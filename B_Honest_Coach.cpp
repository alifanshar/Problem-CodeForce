#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(auto &i:a) cin >> i;
        sort(a.begin(), a.end());
        int ans = a[n-1];
        for(int i=0;i<n-1;i++) ans = min(ans, a[i+1]-a[i]);
        cout << ans << endl;
    }
    return 0;
}