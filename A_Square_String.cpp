#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string a; cin >> a;
        if(a.length()%2 == 1){
            cout  << "NO\n";
            continue;
        }
        
        int x = a.length();
        string b=a.substr(0, x/2), c=a.substr(x/2, x);
        
        if(b == c) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}