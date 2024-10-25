#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x, n;
    long long k;
    cin >> x;
    for(int i=0;i<x;i++){
        cin >> n >> k;
        long long z=0;

        if(k == 1){
            cout << n << '\n';
            continue;
        }

        long long mx_pow = 0;
        while(pow(k, mx_pow) <= n)
            mx_pow++;

        for(int j=mx_pow;n>0;){
            long long a = pow(k,j);
            if(a>n){
                j--;
                continue;
            }
            long long y = n/a;
            z += y;
            n -= a*y;
        }
        cout << z << endl;
    }
    return 0;
}