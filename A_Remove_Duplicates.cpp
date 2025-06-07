#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n), b;
    for(auto &i:a) cin >> i;
    for(int i=n-1;i>=0;i--){
        auto it = find(b.begin(), b.end(), a[i]);
        if(it!=b.end())continue;
        b.push_back(a[i]);
    }
    reverse(b.begin(), b.end());
    cout << b.size() << endl;
    for(auto i:b) cout << i << ' ';
    return 0;
}