#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    set<int> a;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        a.insert(x);
    }
    if((n-a.size())%2==0) cout << a.size();
    else cout << a.size()-1;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}