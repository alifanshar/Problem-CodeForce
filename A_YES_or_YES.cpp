#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    for(int i=0;i<n;i++){
        string a;cin >>  a;
        transform(a.begin(), a.end(), a.begin(), ::toupper);
        if(a == "YES")cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}
