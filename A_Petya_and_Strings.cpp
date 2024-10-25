#include <iostream>
using namespace std;

int main(){
    string a, b;
    int x;
    cin >> a;
    cin >> b;

    for(int i = 0; i < a.size(); i++){
        a[i] = tolower(a[i]);
    }
    for(int i = 0; i < b.size(); i++){
        b[i] = tolower(b[i]);
    }
    if(a==b){
        x = 0;
    }else if(a<b){
        x = -1;
    } else if(a>b){
        x = 1;
    }
    cout << x;

    return 0;
}