#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string a = "codeforces";
    for(int i=0;i<n;i++){
        char b; cin >> b;
        if(a.find(b) != string::npos) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}