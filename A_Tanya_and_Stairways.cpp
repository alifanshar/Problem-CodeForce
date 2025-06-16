#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n), ans;
    for(auto &i:a) cin >> i;

    for(int i=0;i<n-1;i++) if(a[i]>=a[i+1]) ans.push_back(a[i]);
    ans.push_back(a[n-1]);

    cout << ans.size() << endl;
    for(int i:ans) cout << i << ' ';

    return 0;
}