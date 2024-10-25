#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, x=0;
    cin >> n;
    while(n>0){
        int a;
        a = n%10;
        n /= 10;
        if(a==4 || a==7)x++;
    }
    if(x==4 || x==7){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0 ;
}