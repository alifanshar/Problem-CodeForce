#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a, b, res; cin >> a >> b;
        res = min(max(2*a, b), max(2*b, a));
        res *= res;
        cout << res << endl;
    }
    return 0;
}