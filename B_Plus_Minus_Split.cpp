#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, x=0, y=0; cin >> n;
    string a; cin >> a;
    for(int i=0;i<n;i++){
        if(a[i]=='+') x++;
        else y++;
    }
    cout << abs(x-y);
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}