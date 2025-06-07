#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x, y, z; cin >> x >> y >> z;
    if(x==y || y==z || x==z){
        if(x==y && x==max({x,y,z})) cout << "YES\n" << x << ' ' << z << ' ' << 1;
        else if(z==y && y==max({x,y,z})) cout << "YES\n" << 1 << ' ' << x << ' ' << y;
        else if(x==z && x==max({x,y,z})) cout << "YES\n" << z << ' ' << 1 << ' ' << y;
        else cout << "NO";
    }else cout << "NO";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}