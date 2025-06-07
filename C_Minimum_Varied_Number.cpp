#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> a;
    for(int i=9;i>=0;i--){
        if(n-i>=0){
            a.push_back(i);
            n-=i;
        }
        if(n==0) break;
    }
    reverse(a.begin(), a.end());
    for(auto i:a) cout << i;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}