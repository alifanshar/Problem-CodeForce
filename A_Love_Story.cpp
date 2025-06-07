#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int x=0;
        string a, b="codeforces"; cin >> a;
        for(int i=0;i<b.length();i++) if(a[i] != b[i]) x++;
        cout << x << endl;
    }
    return 0;
}