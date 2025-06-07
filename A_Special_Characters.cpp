#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    if(n%2) cout << "NO";
    else{
        cout << "YES\n";
        char c='A';
        for(int i=0;i<n/2;i++){
            cout << c << c;
            c=(c=='Z')?'A':c+1;
        }
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