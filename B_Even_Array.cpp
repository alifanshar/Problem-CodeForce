#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, ga=0, ge=0, ans=-1; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){ 
            cin >> a[i];
            if(a[i]%2 == 0) ge++;
            if(a[i]%2 == 1) ga++;
        }
        if(ge == ga || ge == ga+1){
            ans = 0;
            int x=0;
            for(int i=0;i<a.size();i++) if(a[i]%2 != i%2) x++;
            cout << x/2 << '\n';
        }else cout << -1 << '\n';
    }

    return 0;
}