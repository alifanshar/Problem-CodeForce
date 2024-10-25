#include <iostream>
using namespace std;

int main(){
    int n, a, b, c, z=0;
    cin >> n;

    for (int i = 0; i < n; i++){
        int x = 0;
        cin >> a >> b >> c;
        if(a==1) x++;
        if(b==1) x++;
        if(c==1) x++;
        if(x>=2) z++;
    }
    cout << z;
    return 0;
}