#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string a, b; cin >> a >> b;
    int ans=0;
    for(int i=0;i<n;i++){
        int x=a[i]-'0', y=b[i]-'0';
        ans+=min({y+10-x, x+10-y, abs(x-y)});
    }
    cout << ans << endl;
    return 0;
}