#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, j=0; cin >> n >> k;
    vector<int> a(n);
    map<int, int> mp;
    for(auto &i:a) cin >> i;
    
    set<int> b{a.begin(), a.end()};
    // cout << b.size();

    if(b.size()<k) cout << "NO";
    else{
        cout << "YES\n";
        for(int i=1;i<=n;i++){
            auto it=b.find(a[i-1]);
            if(j==k) break;
            if(it!=b.end()){
                cout << i << ' ';
                b.erase(a[i-1]);
                j++;
            }
        }
    }

    return 0;
}