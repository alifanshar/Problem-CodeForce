#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    for(int p=0;p<t;p++){
        int n; cin >> n;
        bool x=false;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin >> a[i];
        sort(a.begin(), a.end());
        for(int i=1;i<n;i++){
            if(!(a[i]-a[i-1] <= 1)){
                x = true;
                break;
            }
        }
        if(x)cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    return 0;
}
