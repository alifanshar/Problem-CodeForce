#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long> a(n);
        long long sum = 0, m=1e7+1;
        for(int i=0;i<n;i++){
            cin >> a[i];
            m = min(m, a[i]);
        }
        for(auto i:a) sum += i-m;
        cout << sum << endl;
    }
    return 0;
}