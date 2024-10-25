#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, x;
    cin >> n >> k;
    x=n;
    for(int i=0;i<n;i++){
        int a;cin >> a;
        if(a>k)x++;
    }
    cout << x;
    return 0;
}