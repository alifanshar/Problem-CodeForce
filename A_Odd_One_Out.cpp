#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int a[3];  cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3);
        if(a[0] == a[1]) cout << a[2] << '\n';
        else cout << a[0] << '\n';
    }
    return 0;
}