#include <iostream>
using namespace std;

int main(){
    int a[5][5], x=0, l, k;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (a[i][j] == 1){
                l = i-2;
                if(l<0) l = (-1)*l;
                k = j-2;
                if(k<0) k = (-1)*k;
                x = l+k;
            }
        }
    }
    cout << x;

    return 0;
}