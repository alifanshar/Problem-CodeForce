#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x=0;cin >> n;
    string a;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a[0] =='T')x+=4;
        if(a[0] =='C')x+=6;
        if(a[0] =='O')x+=8;
        if(a[0] =='D')x+=12;
        if(a[0] =='I')x+=20;
    }
    cout << x;
    return 0;
}