#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int i=n;
    while(true){
        int x=0, y=i;
        while(y){
            x+=y%10;
            y/=10;
        }
        if(x%4==0){
            cout << i;
            break;
        }
        i++;
    }
    return 0;
}