#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m, k; cin >> n >> m >> k;
        vector<int> a, b;
        int x=n, y=m;
        for(int i=0;i<n;i++){
            int p;cin >> p;
            if(p>=k)x--;
            else a.push_back(p);
        }
        for(int i=0;i<m;i++){
            int p;cin >> p;
            if(p>=k)y--;
            else b.push_back(p);
        }
        int total=a.size()*b.size();
        
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                if(a[i]+b[j]>k)total--;
            }
        }

        cout << total << endl;
    }
    return 0;
}