#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, a, b, c, d; cin >> a >> b >> c >> d;
    x = max({a, b, c, d});
    if(x>a)cout << x-a << ' ';
    if(x>b)cout << x-b << ' ';
    if(x>c)cout << x-c << ' ';
    if(x>d)cout << x-d << ' ';

    return 0;
}
