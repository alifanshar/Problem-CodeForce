#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c; cin >> a >> b >> c;
    cout << min({a+b+c, (a+b)*2, (a+c)*2, (b+c)*2});
    return 0;
}