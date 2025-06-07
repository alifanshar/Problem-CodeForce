#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x, y, z; cin >> x >> y >> z;
    int a=abs(x-y);
    if(a!=0){
        if(a%(z*2)==0) cout << a/(z*2);
        else cout << a/(z*2)+1;
    }else cout << 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}