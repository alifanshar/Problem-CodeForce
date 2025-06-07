#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a=0, b=0; cin >> n;
    for(int i=0;i<n;i++){
        int x, y; cin >> x >> y;
        if(x == y) continue;
        if(x > y) a++;
        else b++;
    }
    if(a == b) cout << "Friendship is magic!^^";
    else if(a > b) cout << "Mishka";
    else cout << "Chris";

    return 0;
}