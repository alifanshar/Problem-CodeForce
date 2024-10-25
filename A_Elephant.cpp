#include <iostream>
using namespace std;

int main(){
    int n, x;
    cin >> n;
    x = (n-(n%5))/5;
    n = n%5;
    if(n==0){
        cout << x;
    }else{
        cout << ++x;
    }

    return 0;
}