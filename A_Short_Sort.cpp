#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        string a; cin >> a;
        if(a == "abc" || a[0] == 'a' || a[1] == 'b' || a[2] == 'c') cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}