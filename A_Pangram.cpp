#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    set<char> a;
    for(int i=0;i<n;i++){
        char x;cin >> x;
        x = tolower(x);
        a.insert(x);
    }
    if(a.size() == 26){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}