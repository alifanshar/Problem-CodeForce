#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    string a; cin >> a;
    if((a[a.length()-1]-'0')%2==0) cout << 0;
    else if((a[0]-'0')%2==0) cout << 1;
    else{
        for(int i=0;i<a.length();i++){
            if((a[i]-'0')%2==0){
                cout << 2;
                return;
            }
        }
        cout << -1;
    }
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}