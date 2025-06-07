#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    int ans=0, x=(a[0]+k-1)/k, y=a[0];
    for(int i=1;i<n;i++) if((a[i]+k-1)/k>=x) ans=i, x=(a[i]+k-1)/k;
    cout << ans+1;
    
    return 0;
}