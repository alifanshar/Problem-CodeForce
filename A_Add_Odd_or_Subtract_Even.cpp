#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long a, b; cin >> a >> b;
        if(a==b){
            cout << "0\n";
            continue;
        }
        if(a>b){
            if(abs(a-b)%2==0) cout << "1\n";
            else cout << "2\n";
        }else{
            if(abs(a-b)%2==0) cout << "2\n";
            else cout << "1\n";
        }
    }
    return 0;
}