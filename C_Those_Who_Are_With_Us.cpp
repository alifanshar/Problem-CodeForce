#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n, m; cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    int x=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
            x=max(x, a[i][j]);
        }
    }

    vector<int> c(n), r(m);
    bool cek=false;
    int cnt=0;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)
        if(a[i][j]==x) c[i]++, r[j]++, cnt++; 
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)
        if(c[i]+r[j]==cnt+(a[i][j]==x)) cek=true;

    cout << (cek ? x-1 : x);
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}