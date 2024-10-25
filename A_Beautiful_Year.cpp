#include<bits/stdc++.h>
using namespace std;

bool cek(int n){
    set<int> a;
    while(n>0){
        int x = n%10;
        if(a.find(x) != a.end())return true;
        a.insert(x);
        n /= 10;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    while(true){
        n++;
        if(cek(n)){
            continue;
        }else{
            break;
        }
    }
    cout << n;
    return 0;
}