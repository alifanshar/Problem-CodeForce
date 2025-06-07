#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    int x=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        x=x^a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==x^a[i]){
            cout << a[i];
            return;
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