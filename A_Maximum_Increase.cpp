#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x=1, m=0; cin >> n;
    vector<long long> a(n);
    cin >> a[0];
    for(int i=1;i<n;i++){
        cin >> a[i];
        if(a[i] > a[i-1]) x++;
        else{
            m=max(m, x);
            x=1;
        }
    }
    m=max(m, x);
    cout << m;

    return 0;
}