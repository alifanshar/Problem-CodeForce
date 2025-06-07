#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x; cin >> n;
    vector<int> a;
    for(int i=0;i<n*2;i++){
        cin >> x;
        auto it=find(a.begin(), a.end(), x);
        if(it != a.end()) continue;
        a.push_back(x);
        cout << x << " ";
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}