#include<bits/stdc++.h>
using namespace std;

void solve(){
    cout << fixed << setprecision(9);
    int n; cin >> n;
    vector<int> a(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    sort(a.begin(), a.end());
    int m=a[n-1];
    sum-=m, n--;
    cout << m+1.0*sum/n;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}