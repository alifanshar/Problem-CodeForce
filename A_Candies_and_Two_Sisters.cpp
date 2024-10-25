#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t, n, x;cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        x=n;
        if(n != 2 && n != 1){
            n /= 2;
            cout << x-n-1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
    return 0;
}