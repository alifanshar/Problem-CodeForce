#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a; cin >> a;
        cout << a/4+(a%4)/2 << endl;
    }
    return 0;
}