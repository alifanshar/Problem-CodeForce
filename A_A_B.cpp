#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string a; cin >> a;
        cout << a[0]+a[2]-'0'*2 << '\n';
    }
    return 0;
}