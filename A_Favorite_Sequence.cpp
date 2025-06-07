#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long> a(n);
        for(auto &i:a) cin >> i;
        int x=0;
        for(int i=0;i<n;i++){
            if(i%2==0) cout << a[x++] << ' ';
            else cout << a[n-x] << ' ';
        }
        cout << endl;
    }
    return 0;
}