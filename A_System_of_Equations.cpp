#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, ans=0; cin >> n >> m;
    for(int i=0;i<=max(n, m);i++){
        for(int j=0;j<=max(n, m);j++){
            if(j*j+i==n && j+i*i ==m) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}