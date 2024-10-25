#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x=0;cin >> n;
    for(int i=0;i<n;i++){
        int a, b;cin >> a;
        if(a != b){
            ++x;
        }
        b=a;
    }
    cout << x;
    return 0;
}