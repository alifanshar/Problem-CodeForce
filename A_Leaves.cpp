#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    set<pair<string, string>> s;
    while(n--){
        string a, b; cin >> a >> b;
        s.insert({a, b});
    }
    cout << s.size();
    return 0;
}