#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, x=0, sum=0; cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]%2==0) x+=a[i];
            sum+=a[i];
        }
        if(x>sum/2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}