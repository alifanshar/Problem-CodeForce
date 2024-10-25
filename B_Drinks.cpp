#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    double a, x;
    for(int i=0;i<n;i++){
        cin >> a;
        x += a/100;
    }
    cout << (x/n)*100;
    return 0;
}