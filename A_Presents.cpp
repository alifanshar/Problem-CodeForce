#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a;cin >> n;
    int x[n];
    for(int i=1;i<=n;i++){
        cin >> a;
        x[a-1] = i;
    }
    for(int i=0;i<n;i++)cout << x[i] << ' ';
    return 0;
}