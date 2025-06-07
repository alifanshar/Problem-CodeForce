#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a; cin >> a;
    int x=(a[0]-'0')*10+(a[1]-'0');
    if(x<10){ 
        if(x==0) cout << "12" << a.substr(2) << " AM";
        else cout << '0' << a.substr(1) << " AM";
    }
    else{
        if(x<12) cout << a << " AM";
        else if(x==12) cout << a << " PM";
        else if(x-12<10) cout << '0' << x-12 << a.substr(2) << " PM";
        else cout << x-12 << a.substr(2) << " PM";
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}