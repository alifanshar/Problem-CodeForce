#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, x=0, y=0; cin >> n;
        for(int i=1;i<=n;i++){
            int a, b; cin >> a >> b;
            if(a<=10 && y<b){
                x=i;
                y=b;
            }
        }
        cout << x << endl;
    }
    return 0;
}