#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    string a, b; cin >> a >> b;
    map<char, int> x={{'S', 1}, {'M', 2}, {'L', 3}};
    if(x[a[a.length()-1]] > x[b[b.length()-1]]) cout << '>';
    else if(x[a[a.length()-1]] < x[b[b.length()-1]]) cout << '<';
    else if(a==b) cout << '=';
    else{
        if(a[a.length()-1]=='L') cout << (a.length() > b.length() ? '>' : '<');
        else cout << (a.length() < b.length() ? '>' : '<');
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