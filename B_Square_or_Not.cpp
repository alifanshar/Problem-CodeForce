#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string a; cin >> a;
    int b=sqrt(n), x=0;
    for(int i=0;i<n;i++) if(a[i]=='0') x++;
    if(b*b==n && (b-2)*(b-2)==x) cout << "Yes";
    else cout << "No";
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}