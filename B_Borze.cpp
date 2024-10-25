#include<bits/stdc++.h>
using namespace std;

int main(){
    string a; cin >> a;
    while(a.size() != 0){
        if(a.substr(0, 2) == "-." ||  a.substr(0, 2) == "--"){
            if(a.substr(0, 2) == "-.") cout << 1;
            else cout << 2;
            a.erase(0, 2);
        }else{
            cout << 0;
            a.erase(0, 1);
        }
    }
    return 0;
}