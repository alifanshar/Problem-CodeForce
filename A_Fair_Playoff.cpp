#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        vector<int> a(4);
        int x, y;
        for(int i = 0; i < 4; i++) cin >> a[i];

        x = (a[0] > a[1]) ? a[0] : a[1];
        y = (a[2] > a[3]) ? a[2] : a[3];

        sort(a.begin(), a.end());
        if(x > a[1] && y > a[1]) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}