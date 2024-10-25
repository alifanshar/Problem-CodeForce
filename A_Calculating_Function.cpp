#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, x;cin >> n;
        if(n%2 == 1){ 
            x = (n/2)*-1;
            x--;
        }else{
            x = n/2;
        }
    cout << x;
    return 0;
}