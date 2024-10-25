#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, x=0; cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]+k <= 5) x++;
    }
    cout << x/3;

    return 0;
}