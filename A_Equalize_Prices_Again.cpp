#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    cout << (sum+n-1)/n;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}