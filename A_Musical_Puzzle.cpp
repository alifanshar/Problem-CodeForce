#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string a; cin >> a;
    vector<string> b;
    for(int i=1;i<n;i++){
        string x=a.substr(i-1, 2);
        auto it = find(b.begin(), b.end(), x);
        if(it!=b.end())continue;
        b.push_back(x);
    }
    cout << b.size();
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}