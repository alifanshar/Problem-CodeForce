#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a=0, b=0, c=0;
        for(int i=0;i<9;i++){
            char x; cin >> x;
            if(x=='A') a++;
            if(x=='B') b++;
            if(x=='C') c++;
        }
        if(a==2) cout << "A\n";
        if(b==2) cout << "B\n";
        if(c==2) cout << "C\n";
    }
    return 0;
}