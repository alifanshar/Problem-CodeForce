#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, x; cin >> a >> b;
    x = max(a, b);
    x = 6-(x-1);
    if(6%x == 0) cout << "1/" << 6/x;
    else if(x == 4) cout << "2/3";
    else cout << x << "/6";

    return 0;
}