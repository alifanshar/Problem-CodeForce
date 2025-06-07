#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int z;  cin >> z;
        string a, b="Timur"; cin >> a;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if(a == b) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}