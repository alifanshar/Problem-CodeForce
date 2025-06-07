#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    string a; cin >> a;
    set<char> b;
    vector<char> x;
    map<char, char> c;
    for(int i=0;i<n;i++)
        b.insert(a[i]);
    
    for(auto i:b) x.push_back(i);
    for(int i=0;i<x.size();i++)
        c[x[i]]=x[x.size()-1-i];
    
    for(int i=0;i<n;i++)
        cout << c[a[i]];
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}