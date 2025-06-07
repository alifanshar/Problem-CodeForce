#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    bool cek = true;
    for(int i=0;i<n*m;i++){
        char a; cin >> a;
        if(a=='C' || a=='M' || a=='Y') cek=false;
    }
    if(cek) cout << "#Black&White";
    else cout << "#Color";

    return 0;
}