#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    for(int j=0;j<t;j++){
        int a, b, c; cin >> a >> b >> c;
        if(a+b >= 10 || a+c >= 10 || b+c >= 10) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}