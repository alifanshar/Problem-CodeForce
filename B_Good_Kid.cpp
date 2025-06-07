#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        
        for(auto &i:a) cin >> i;
        sort(a.begin(), a.end());
        a[0]++;
        int s=a[0];
        for(int i=1;i<n;i++) s*=a[i];
        cout << s << endl;
    }

    return 0;
}