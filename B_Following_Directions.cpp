#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a=0, b=0, n; cin >> n;
        bool cek=false;
        for(int i=0;i<n;i++){
            char x; cin >> x;
            if(x=='U') a++;
            if(x=='R') b++;
            if(x=='D') a--;
            if(x=='L') b--;
            if(a==1 && b==1) cek=true;
        }
        if(cek) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}