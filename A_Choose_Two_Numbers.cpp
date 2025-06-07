#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    int m; cin >> m;
    vector<int> b(m);
    for(auto &i:b) cin >> i;

    cout << *max_element(a.begin(), a.end()) << ' ' << *max_element(b.begin(), b.end());
    return 0;
}