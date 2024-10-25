#include<bits/stdc++.h>

using namespace std;

int main(){
    long long a, x=0;cin >> a;// 1, 5, 10, 20, 100
    if(a>=100){
        x += a/100;
        a %= 100;
    }
    if(a>=20){
        x += a/20;
        a %= 20;
    }
    if(a>=10){
        x += a/10;
        a %= 10;
    }
    if(a>=5){
        x += a/5;
        a %= 5;
    }
    if(a>=1)x += a;

    cout << x;
    return 0;
}