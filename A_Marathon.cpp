#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int x=0, a, b, c, d; cin >> a >> b >> c >> d;
        if(a<b)x++;
        if(a<c)x++;
        if(a<d)x++;
        cout << x << '\n';
    }
    return 0;
}