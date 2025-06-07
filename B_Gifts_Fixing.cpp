#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long> a(n), b(n);
        long long ma=1e10, mb=1e10, x=0;
        for(int i=0;i<n;i++){cin >> a[i];ma=min(a[i], ma);}
        for(int i=0;i<n;i++){cin >> b[i];mb=min(b[i], mb);}
        for(int i=0;i<n;i++){
            x += max(a[i]-ma, b[i]-mb);
        }
        cout << x << endl;
    }
    return 0;
}