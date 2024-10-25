#include<iostream>
using namespace std;

int main(){
    string a;
    char x;
    cin >> a;
    for(int i=0;i<a.length();i++){
        if(a[i] == '+') continue;
        for(int j=0;j<a.length();j++){
            if(a[j] == '+') continue;
            if(a[i] < a[j]){
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }

    cout << a;
    return 0;
}