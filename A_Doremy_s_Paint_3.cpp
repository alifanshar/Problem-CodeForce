#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, x=0; cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for(int i=0;i<n;i++){
        int b; cin >> b;
        if(find(a.begin(), a.end(), b) == a.end()) x++;
        a.push_back(b);
        mp[b]++;
    }
    if(x>2) cout << "No";
    else if(x==1) cout << "Yes";
    else{
        vector<int> b;
        for(auto i:mp) b.push_back(i.second);
        if(n%2==0 && b[0]%2==b[1]%2 && abs(b[0]-b[1])==0) cout << "Yes";
        else if(n%2==1 && b[0]%2!=b[1]%2 && abs(b[0]-b[1])==1) cout << "Yes";
        else cout << "No";
    }
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}