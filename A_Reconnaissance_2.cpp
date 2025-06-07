#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n; cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int x=0, y=0, b=1000;
    for(int i=1;i<n;i++)
        if(abs(a[i-1]-a[i])<b) x=i-1, y=i, b=abs(a[i-1]-a[i]);

    if(abs(a[0]-a[n-1])<b) cout << 1 << ' ' << n;
    else cout << x+1 << ' ' << y+1;
    return 0;
}