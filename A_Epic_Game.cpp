#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, n; cin >> a >> b >> n;
    int i=0;
    bool cek=true;
    while(n){
        if(i%2==0) n-=__gcd(a, n);
        else n-=__gcd(b, n);
        i++;
        if(n<=0) cek=i%2;
    }
    cout << !cek;

    return 0;
}