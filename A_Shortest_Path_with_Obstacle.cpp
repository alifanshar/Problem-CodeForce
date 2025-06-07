#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int x1, x2, y1, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if(x1==x2 && x2==x3) cout << (((y1<y3 && y3<y2) || (y1>y3 && y3>y2)) ? abs(x1-x2)+abs(y1-y2)+2 : abs(x1-x2)+abs(y1-y2));
    else if(y1==y2 && y2==y3) cout << (((x1<x3 && x3<x2) || (x1>x3 && x3>x2)) ? abs(x1-x2)+abs(y1-y2)+2 : abs(x1-x2)+abs(y1-y2));
    else cout << abs(x1-x2)+abs(y1-y2);
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}