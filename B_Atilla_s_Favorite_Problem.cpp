#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, x=0; cin >> n;
        vector<char> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            x = max(x, a[i]-'a');
        }
        cout << x+1 << endl;
    }

    return 0;
}