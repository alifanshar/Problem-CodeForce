#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;

    sort(a.begin(), a.end());
    int ans=0;
    for(int i=1;i<n;i++)
        ans+=a[i]-a[i-1]-1;
    
    cout << ans;

    return 0;
}