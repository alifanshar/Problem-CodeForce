#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, x=0, ans=0; cin >> n;
        for(int i=0;i<n;i++){
            int a; cin >> a;
            if(a==0)x++;
            else{
                ans = max(ans, x);
                x = 0;
            }
        }
        ans = max(ans, x);
        cout << ans << endl;
    }
}