#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n, x=0; cin >> n;
        for (int i = 1; i <= n; i=i*10+1){
            for (int j = 1; j < 10; j++){
                if(i*j<=n) x++;
            }
        }
        
        cout << x << endl;
    }

    return 0;
}