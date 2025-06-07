#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a, b, c, n; cin >> a >> b >> c >> n;
        n -= 3*max({a, b, c})-(a+b+c);
        if(n%3==0 && n>=0) cout << "YES\n";
        else cout << "NO\n";
    }
}