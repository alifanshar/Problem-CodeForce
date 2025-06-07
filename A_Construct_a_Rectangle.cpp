#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    vector<int> a(3);
    int sum=0;
    for(int i=0;i<3;i++){
        cin >> a[i];
        sum+=a[i];
    }
    bool cek=false;
    int x=a[2];
    for(int i=0;i<3;i++){
        int b=(a[i]%2==0)?a[i]/2:0;
        if(sum-a[i]==a[i] || b+x==sum-b-x) cek=true;
        x=a[i];
    }
    if(cek) cout << "YES";
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