#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, x=0; cin >> n;
        vector<int> a(n*2);
        for(int i = 0; i < n*2; i++){
            cin >> a[i];
            if(a[i]%2 == 0) x++;
        }
        if(x==n) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}