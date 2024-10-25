#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int a; cin >> a;
        if(a >= 1900)cout << "Division 1\n";
        if(1600 <= a && a < 1900)cout << "Division 2\n";
        if(1400 <= a && a < 1600)cout << "Division 3\n";
        if(a < 1400)cout << "Division 4\n";
    }
    return 0;
}