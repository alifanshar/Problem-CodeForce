#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int m, x=0, z=0; cin >> m;
        int a[m]; 
        for(int j=0;j<m;j++){ 
            cin >> a[j];
            if(a[j] == a[j-1] || a[j] == a[j-2]){
                x=a[j];
            }
        }
        for(int j=0;j<m;j++)if(x !=  a[j])z=j+1;

        cout << z  << '\n';
    }
    return 0;
}