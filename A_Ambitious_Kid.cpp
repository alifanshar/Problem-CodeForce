#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans=1e6;
    for(int i=0;i<n;i++) ans=min(ans, abs(a[i]));
        
    cout << ans;

    return 0;
}