#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin >> n;
    for(int i=0;i<n;i++){
        long long a, b=0, c=0; cin >> a;
        if(a%4 != 0){
            cout << "NO\n";
            continue;
        }else cout << "YES\n";
        for(int j=1;j<=a/2;j++) {
            b += j*2;
            cout << j*2 << ' ';
        }
        for(int j=0;j<(a/2)-1;j++) {
            c += 1+j*2;
            cout << 1+j*2 << ' ';
        }
        cout << b-c << '\n';
    }
    return 0;
}