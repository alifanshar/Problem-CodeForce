#include<bits/stdc++.h>
using namespace std;

int main(){
    string t; cin >> t;
    char a='a';
    int x=0;
    for(int i=0; i<t.length(); i++){
        x += min(abs(a-t[i]), 26-abs(a-t[i]));
        a=t[i];
    }
    cout << x;
    return 0;
}