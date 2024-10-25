#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x=0;cin >> n;
    for(int i=0;i<n;i++){
        int a, b;cin >> a >> b;
        if(a<b && b-a >= 2)x++;
    }
    cout << x;
    return 0;
}