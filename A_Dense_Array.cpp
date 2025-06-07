#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    int x=0;
    for(int i=1;i<n;i++){
        if((max(a[i-1], a[i])+1)/2<=min(a[i-1], a[i]))
            continue;
        int b=max(a[i-1], a[i]), c=min(a[i-1], a[i]);
        while(c+c<b)
            c+=c, x++;
        
    }
    cout << x;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}