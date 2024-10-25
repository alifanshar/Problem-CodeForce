#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, x=0;cin >> a >> b;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(i%2 == 0){
                cout << '#';
            }else {
                if(j == b-1 && x%2 == 0 && i%2 == 1){
                    cout << '#';
                    continue;
                }
                if(j == 0 && x%2 == 1 && i%2 == 1){
                    cout << '#';
                    continue;
                }
                cout << '.';
            }
        }
        if(i%2 == 1)x++;
        cout << endl;
    }
    return 0;
}