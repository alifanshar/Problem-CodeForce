#include<iostream>
using namespace std;

int main(){
    int l, b, i;
    cin >> l >> b;
    for(i=0;l<=b;i++){
        l *= 3;
        b *= 2;
    }
    cout << i;
    return 0;
}