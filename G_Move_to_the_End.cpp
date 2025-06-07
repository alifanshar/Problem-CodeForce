#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    vector<long long> pref;
    int m=a[0];
    for(int i=1;i<n;i++){
        if(m>a[i]) pref.push_back(a[i]);
        else {
            pref.push_back(m);
            m=a[i];
        }
    }
    pref.push_back(m);

    long long sum=0;
    for(int i=n-1;i>=0;i--){
        sum+=pref[i];
        cout << sum << ' ';
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