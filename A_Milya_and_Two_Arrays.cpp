#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    set<int> a, b;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        a.insert(x);
    }
    for(int i=0;i<n;i++){
        int x; cin >> x;
        b.insert(x);
    }
    if((a.size()>2 || b.size()>2) || (a.size()==2 && b.size()==2)) cout << "YES";
    else cout << "NO";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}