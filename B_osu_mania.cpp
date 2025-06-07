#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            char x; cin >> x;
            if(x=='#') a.push_back(j+1);
        }
    }
    for(int i=0;i<n;i++){
        cout << a[n-i-1] << ' ';
    }
    cout << '\n';
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}