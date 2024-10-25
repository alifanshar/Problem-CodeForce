#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a; cin >> n;
    for(int i=0;i<n;i++){
        int x=0;
        cin >> a;
        string b=to_string(a);
        for(int i=0;i<b.length();i++)if(b[i] != '0')x++;
        cout << x << '\n';
        for(int i=b.length()-1;i>=0;i--){
            int z = pow(10, i), p;
            p = a/z;
            if(p != 0)cout << p*z << ' ';
            a %= z;
        }
        cout << '\n';
    }
    return 0;
}