#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int a=pow(2, n), b=0;
    for(int i=0;i<n-1;i++){
        if(i<n/2-1)a+=pow(2, i+1);
        else b+=pow(2, i+1);
    }
    cout << abs(a-b);;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}