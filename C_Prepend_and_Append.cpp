#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, x=0; cin >> n;
        string a; cin >> a;
        for(int i=0;i<n/2;i++){
            if(a[i] != a[n-1-i]) x+=2;
            else break;
        }
        cout << n-x << endl;
    }
}