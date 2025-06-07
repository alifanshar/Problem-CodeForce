#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        long long a, b, c; cin >> a >> b >> c;
        if(c%a < b) a *= (c/a)-1;
        else a *= (c/a);
        c = b+a;
        cout << c << endl;
    }

    return 0;
}