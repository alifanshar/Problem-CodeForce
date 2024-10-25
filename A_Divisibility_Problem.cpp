#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    for(int i=0;i<n;i++){
        long long a, b;cin >> a >> b;
        if(a%b != 0){
            a %= b;
            b -= a;
            cout << b << endl;
        }else{
            cout << 0 << endl;
        }
    }
    return 0;
}