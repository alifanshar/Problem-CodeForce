#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<string> a(n);
    for(auto &i:a) cin >> i;

    int x1, x2, y1, y2;
    bool cek=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]=='*' && !cek) x1=i, y1=j, cek=true;
            if(a[i][j]=='*' && cek) x2=i, y2=j;
        }
    }

    if(x1==x2)  a[(x1+1)%n][y1]='*', a[(x2+1)%n][y2]='*';
    else if(y1==y2) a[x1][(y1+1)%n]='*', a[x2][(y2+1)%n]='*';
    else a[x1][y2]='*', a[x2][y1]='*';

    for(auto i:a) cout << i << '\n';
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        // cout << "\n";
    }
    return 0;
}