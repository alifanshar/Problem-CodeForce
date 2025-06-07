#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, a, b; cin >> n >> a >> b;
        int x=n*a, y=(n/2)*b;
        if(n%2==0) cout << min(x, y) << endl;
        else cout << min(x, y+a) << endl;
    }
    return 0;
}