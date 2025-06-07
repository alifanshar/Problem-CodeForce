#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    string a, ans; cin >> a;
    reverse(a.begin(), a.end());
    for(int i=0;i<n;i++){
        char b=a[i]-'0'+'a'-1;
        if(a[i]!='0') ans.push_back(b);
        else{
            string c=a.substr(i+1, 2);
            reverse(c.begin(), c.end());
            int x=stoi(c);
            b=x+'a'-1;
            ans.push_back(b);
            i+=2;
        }
    }
    reverse(ans.begin(), ans.end());
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