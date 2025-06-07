#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(auto &i:a) cin >> i;
        sort(a.begin(), a.end());
        int x=1, y=-1;
        for(int i=1;i<n;i++){
            if(a[i] == a[i-1]) x++;
            else x=1;
            if(x==3){
                y = a[i];
            }
        }
        cout << y << endl;
    }
    return 0;
}