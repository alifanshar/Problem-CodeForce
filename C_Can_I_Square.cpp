#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n, x=0; cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {cin >> a[i];x+=a[i];}
        double f=sqrt(x);
        long long i=sqrt(x);
        if(f==i) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}