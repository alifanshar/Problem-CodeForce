#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    vector<pair<int, int>> a(n);
    for(int i=0;i<n;i++) cin >> a[i].first >> a[i].second;
    sort(a.begin(), a.end(), [](pair<int, int>& x, pair<int, int>& y) {
        if (x.first != y.first) return x.first > y.first;
        return x.second < y.second;
    });
    int ans = 0, kx=a[k-1].first, ky=a[k-1].second;
    
    for(int i=0;i<n;i++) if(kx==a[i].first && ky==a[i].second) ans++;

    cout << ans;
    
    return 0;
}