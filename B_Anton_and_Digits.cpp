#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d; cin >> a >> b >> c >> d;
    int m=min({a, c, d});
    cout << (m*256)+(min(max(a-m, 0), b)*32);
    return 0;
}