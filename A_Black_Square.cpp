#include<bits/stdc++.h>
using namespace std;

int main(){
    int z=0, a1, a2, a3, a4;  cin >> a1 >> a2 >> a3 >> a4;
    string x; cin >> x;

    for(int i=0;i<x.length();i++){
        if(x[i] == '1')z += a1;
        if(x[i] == '2')z += a2;
        if(x[i] == '3')z += a3;
        if(x[i] == '4')z += a4;
    }
    cout << z << endl;


    return 0;
}