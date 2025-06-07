#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, x=0, y=0; cin >> n;
        vector<char> a(n);
        bool cek=true;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(cek && a[i]=='B'){
                x=i; cek=false;
            }
            if(a[i]=='B') y=i;
        }
        cout << y-x+1 << endl;
    }
    return 0;
}