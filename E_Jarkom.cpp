#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    map<string, string> mp;
    for(int i=0;i<n;i++){
        string x, y; cin >> x >> y;
        mp[y]=x;
    }
    for(int i=0;i<k;i++){
        string x, y; cin >> x >> y;
        cout << x << ' ' << y << " #" << mp[y.substr(0, y.length()-1)] << endl;
    }
    
    return 0;
}