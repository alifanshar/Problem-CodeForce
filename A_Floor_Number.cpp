#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        double a, b; cin >> a >> b;
        a=max(a-2, 0.);
        cout << ceil(a/b)+1 << '\n';
    }
    return 0;
}