#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a=0, b=0, z=0, x=0, max=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        z -= a;
        z += b;
        if(z>=max)max=z;
        // x = z;
    }
    cout << max;
    return 0;
}