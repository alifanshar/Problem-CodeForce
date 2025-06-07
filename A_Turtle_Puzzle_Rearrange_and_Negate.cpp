#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, sum=0; cin >> n;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        sum += abs(x);
    }
    cout << sum;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}