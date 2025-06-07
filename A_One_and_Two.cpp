#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    int x=0, y=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]==2) x++;
    }

    for(int i=0;i<n;i++){
        if(a[i]==2){
            y++;
            x--;
        }
        if(x==y){
            cout << i+1;
            return;
        }
    }
    cout << -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}