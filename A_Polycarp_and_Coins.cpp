#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long a, b;  cin >> a;
        if(a%3 == 0) {cout << a/3 << ' ' << a/3 << '\n'; continue;}
        b = a/3;
        if(a%3 == 2) cout << b << ' ' << b+1 << '\n';
        else cout << b+1 << ' ' << b << '\n';
    }
    return 0;
}