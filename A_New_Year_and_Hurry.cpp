#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=0, w=0, a, b; cin >> a >> b;
    for(int i=1;i<=a;i++){
        w += 5*i;
        if(240 < b+w)break;
        x=i;
    }
    cout << x;
    return 0;
}