#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;

    int t; cin >> t;
    while(t--){
        int x, y; cin >> x >> y;
        if(1<x && x<n) a[x-2]+=y-1, a[x]+=a[x-1]-y, a[x-1]=0;
        if(x==1) a[x]+=a[x-1]-y, a[x-1]=0;
        if(x==n) a[x-2]+=y-1, a[x-1]=0;
    }

    for(auto i:a) cout << i << '\n';

    return 0;
}