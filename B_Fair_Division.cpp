#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, a=0, b=0; cin >> n;
        while(n--){
            int x; cin >> x;
            if(x==1)a++;
            else b++;
        }
        if(b%2==1){ 
            if(a>0 && a%2==0) cout << "YES\n";
            else cout << "NO\n";
        }else{
            if((b*2+a)%2==0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}