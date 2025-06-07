#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int x=0, ans=1;
    for(int i=1;i<n;i++)
        x+=4, ans+=x;
    cout << ans;
    return 0;
}