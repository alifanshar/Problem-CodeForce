#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        string a; cin >> a;
        for(int j=0;j<a.length();j+=2){
            cout << a[j];
            if(a[j+1] == a[j+2]) continue;
            cout << a[j+1];
        }
        cout << '\n';
    }

    return 0;
}