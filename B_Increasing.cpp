#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(auto &i:a) cin >> i;
        sort(a.begin(), a.end());
        string ans = "YES";
        for(int i=0;i<n-1;i++) if(a[i] >= a[i+1]) ans = "NO";
        cout << ans << endl;
    }
    return 0;
}