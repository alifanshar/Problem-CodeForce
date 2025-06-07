#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, g=0, sum=0; cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]%2==0) g++;
            sum+=a[i];
        }
        if((g>0 && n-g!=0) || sum%2==1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}