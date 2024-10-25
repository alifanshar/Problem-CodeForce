#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    int a;cin >> a;
    set<int> cek;
    int x[a];
    for(int i=0;i<a;i++){
        cin >> x[i];
        cek.insert(x[i]);
    }
    int b;cin >> b;
    int y[b];
    for(int i=0;i<b;i++){
        cin >> y[i];
        cek.insert(y[i]);
    }

    for(int i=1;i<=n;n--){
        if(cek.find(n) == cek.end()){
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
    
    return 0;
}