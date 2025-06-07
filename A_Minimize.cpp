#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a, b, m=100; cin >> a >> b;
        for(int i=a;i<=b;i++) m=min((i-a)+(b-i), m);
        cout << m << endl;
    }

    return 0;
}