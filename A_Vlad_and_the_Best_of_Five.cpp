#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a=0;
        for(int i=0;i<5;i++){
            char x; cin >> x;
            if(x=='A') a++;
        }
        if(a>=3) cout << "A\n";
        else cout << "B\n";
    }
    return 0;
}