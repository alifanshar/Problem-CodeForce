#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, m, k; cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for(auto &i:a) cin >> i;
    for(auto &i:b) cin >> i;
 
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
 
    int i=0, j=0, ans=0;
 
    while(i<n && j<m)
        (abs(a[i]-b[j])<=k)? ans++, j++, i++:(k<a[i]-b[j])?j++:i++;
    
 
    cout << ans;
    
    return 0;
}