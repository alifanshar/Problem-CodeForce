#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b, c, x;
    cin >> a;
    cin >> b;
    cin >> c;
    x = a+b;
    sort(x.begin(), x.end());
    sort(c.begin(), c.end());
    if(x==c) cout << "YES";
    else cout << "NO";

    return 0;
}