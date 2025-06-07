#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x=0, y=0;
    bool cek=false, cek2=true;
    for(int i=1;i<=8;i++){
        int a, c=0, j=1;
        for(;j<=8;j++){
            char ch; cin >> ch;
            if(ch=='#'){ c++;a=j;}
        }
        if(c==2 && cek2) cek=true;
        if(cek && c==1 && cek2){
            x=i;
            y=a;
            cek=false;
            cek2=false;
        }
        c=0;
    }
    cout << x << " " << y;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}