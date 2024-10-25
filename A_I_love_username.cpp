#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x=0; cin >> n;
    int a[n];
    for(int i=0;i<n;i++)cin >> a[i];
    int max=a[0], min=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
            x++;
        }
        if(min>a[i]){
            min=a[i];
            x++;
        }
    }
    cout << x;

    return 0;
}