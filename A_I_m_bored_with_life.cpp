#include<bits/stdc++.h>
using namespace std;

long long fac(long long n){
    long long res=1;
    for(int i=2;i<=n;i++) res*=i;
    return res;
}

int main(){
    long long a, b; cin >> a >> b;
    cout << fac(min(a, b));
    return 0;
}