#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n, x=0, y=10000000000; cin >> n;
        vector<long long> a(n);
        for(int  i = 0; i < n; i++){
            cin >> a[i];
            x = max(x,a[i]);
            y = min(y,a[i]);
        }
        cout << x-y << '\n';
    }
    return 0;
}