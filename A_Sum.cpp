#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int a, b, c; cin >> a >> b >> c;
        if(a+b == c){cout << "YES" << '\n';continue;}
        if(a+c == b){cout << "YES" << '\n';continue;}
        if(c+b == a){cout << "YES" << '\n';continue;}
        cout << "NO" << '\n';
    }
    return 0;
}