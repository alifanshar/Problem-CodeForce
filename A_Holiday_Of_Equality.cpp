#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, max=0, x=0, a; cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        x += a;
        if(max < a) max = a;
    }
    cout << max*n-x << endl;

    return 0;
}