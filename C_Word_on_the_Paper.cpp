#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        for(int i=0;i<64;i++){
            char a; cin >> a;
            if(a != '.') cout << a;
        }
        cout << endl;
    }

    return 0;
}