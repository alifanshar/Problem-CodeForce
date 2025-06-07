#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x=0, y=0; cin >> n;
    string a; cin >> a;
    for(int i=0;i<n;i++){
        if(a[i]=='n') x++;
        if(a[i]=='z') y++;
    }
    for(int i=0;i<x;i++) cout << "1 ";
    for(int i=0;i<y;i++) cout << "0 ";
    return 0;
}