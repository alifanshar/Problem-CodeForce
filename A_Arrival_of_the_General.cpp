#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, a=0, b=0;cin >> n;
    int x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    int min=x[n-1], max=x[0];
    for(int i=0;i<n;i++){
        if(x[i] <= min){
            min = x[i];
            a = i;
        }
        if(x[i] > max){
            max = x[i];
            b = i;
        }
    }
    if(a<b)b--;
    cout << (n-1-a)+b;
    return 0;
}