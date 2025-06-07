#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k, sum=0; cin >> n >> k;
        vector<int> a(n, 0), b(n, 0);
        for(auto &i:a) cin >> i;
        for(auto &i:b) cin >> i;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        reverse(b.begin(), b.end());
        bool cek=a[0] < b[0];
        int i=0;
        while(k-- && cek){
            a[i] = max(a[i], b[i]);
            i++;
        }
        cout << accumulate(a.begin(), a.end(), 0) << endl;
    }

    return 0;
}