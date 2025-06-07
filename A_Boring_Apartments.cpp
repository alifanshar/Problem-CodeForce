#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, j[4]={1, 3, 6, 10}; cin >> t;
    while(t--){
        string a;  cin >> a;
        int x = a[0] - '0', z;
        z = 10*(x-1);
        cout << z+j[a.length()-1] << '\n';
    }
    return 0;
}