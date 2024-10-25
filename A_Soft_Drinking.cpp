#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int x, y, z;
    x = (k*l)/nl;
    y = c*d;
    z = p/np;
    x = min({x, y, z})/n;
    cout << x;
    return 0;
}