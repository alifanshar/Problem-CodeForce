#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, x=0, b=0;cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a >= 1){
            x += a;
        }else{
            if(x == 0){
                b++;
                continue;
            }
            x--;
        }
    }
    cout << b;
    return 0;
}