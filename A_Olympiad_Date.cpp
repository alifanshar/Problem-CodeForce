#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> b={0, 1, 0, 3, 2, 0, 2, 5};
    int cek=0, ans=0;
    for(int i=1;i<=n;i++){
        int it=find(b.begin(), b.end(),a[i-1])-b.begin();
        if(it!=b.size()){
            cek++;
            b.erase(b.begin()+it);
        }
        if(b.size()==0){
            ans=i;
            break;
        }
    }
    cout << ans;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}