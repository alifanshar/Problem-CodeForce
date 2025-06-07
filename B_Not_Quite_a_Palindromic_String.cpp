#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n, k; cin >> n >> k;
    string a; cin >> a;

    int x=0, y=0;
    for(int i=0;i<n;i++) (a[i]=='0')?x++:y++;
    if(abs(x-y)/2<=k && k<=abs(x-y)/2+(min(x, y)/2)*2 && (abs(x-y)/2)%2==k%2) cout << "YES";
    else cout << "NO";
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}