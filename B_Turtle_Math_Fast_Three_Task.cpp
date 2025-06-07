#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, sum=0; cin >> n;
    vector<int> a(n);
    bool cek=false;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }

    for(int i=0;i<n;i++)
        if((sum-a[i])%3==0) cek=true;
    
    if(sum%3==0) cout << 0;
    else if((sum+1)%3==0 || cek) cout << 1;
    else cout << 2;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}