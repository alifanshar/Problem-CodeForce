#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, c, d, x=0;
    cin >> a >> b >> c >> d;
    if(a == b)x++;
    if(a == c)x++;
    if(a == d)x++;
    if(b == c && a != b)x++;
    if(b == d && a != b)x++;
    if(c == d && b != c)x++;
    cout << x;
    return 0;
}