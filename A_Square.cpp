#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int x1, y1, x2, y2;
        for(int i=0;i<4;i++){
            int a, b; cin >> a >> b;
            if(i==0) x1 = a, y1 = b;
            if(x1!=a) x2 = a;
            if(y1!=b) y2 = b;
        }
        cout << abs(x2-x1)*abs(y2-y1) << endl;
    }
    return 0;
}