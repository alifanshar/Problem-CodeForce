#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        char a, b;  cin >> a >> b;
        int x = a - '0', y = b - '0';
        cout << x+y << '\n';
    }
    return 0;
}