#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    char x[a];
    for(int i=0;i<a;i++){
        cin >> x[i];
    }
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            if(x[j] < x[j+1]){
                int c=x[j];
                x[j] = x[j+1];
                x[j+1] = c;
                j++;
            }
        }
    }
    for(int i=0;i<a;i++){
        cout << x[i];
    }

    return 0;
}