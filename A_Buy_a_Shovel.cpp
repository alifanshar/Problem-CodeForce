#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, x=0; cin >> a >> b;
    a %= 10;
    for(int i=0;i<10;i++){
        int w = a*(i+1);
        if(w%10 == b || w%10 == 0){x=i;break;}
    }
    cout << x+1;
    return 0;
}
