#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        char a;
        int x=0, z=0;
        for(int j=0;j<6;j++){
            cin >> a;
            if(j<3)x += a-'0';
            else z += a-'0';
        }
        if(x==z)cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}