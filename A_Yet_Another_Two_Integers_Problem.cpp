#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        long long a, b, x; cin >> a >> b;
        if(a == b){
            cout << "0\n";
            continue;
        }
        x = max(a, b) - min(a, b);
        if(x%10 == 0){
            cout << x/10 << '\n';
        }else{
            cout << (x/10)+1 << '\n';
        }
    }
    return 0;
}