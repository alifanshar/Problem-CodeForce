#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, b=0; cin >> n;
        set<char> a;
        for(int i=0;i<n;i++){
            char x; cin >> x;
            if(find(a.begin(), a.end(), x) != a.end()) b++;
            else {
                b+=2;
                a.insert(x);
            }
        }
        cout << b << endl;
    }

    return 0;
}