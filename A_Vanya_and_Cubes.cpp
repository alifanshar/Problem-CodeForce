#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i=1, j=0, ans=0; cin >> n;
    while(n>0){
        j+=i;
        if(n-j>=0){
            ans++;
            n = max(0, n-j);
        }else n-=j;
        i++;
    }
    cout << ans;

    return 0;
}