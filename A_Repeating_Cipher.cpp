#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    int x=1;
    for(int i=0;i<n;i+=x){
        cout << s[i];
        x++;
    }
    return 0;
}