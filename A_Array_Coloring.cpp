#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, x=0; cin >> n;
        for(int i=0;i<n;i++){
            int a; cin >> a;
            if(a%2==1) x++;
        }
        if(x%2==0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}