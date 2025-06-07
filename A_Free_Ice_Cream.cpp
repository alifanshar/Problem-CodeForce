#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, a, b=0; cin >> n >> a;
    for(int i=0;i<n;i++){
        char x; cin >> x;
        long long y; cin >> y;
        if(x=='+') a+=y;
        else{
            if(a-y>=0)a-=y;
            else{
                b++;
            }
        }
    }
    cout << a << ' ' << b;
    return 0;
}