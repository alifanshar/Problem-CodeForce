#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    sort(a.begin(), a.end());

    int ans=0;
    for(int i=0;i<n;i+=2) ans+=a[i+1]-a[i];

    cout << ans;

    return 0;
}