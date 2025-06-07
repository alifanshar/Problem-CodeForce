#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b; cin >> a >> b;
    int n=b.length(), x=0;
    for(int i=0;i<n;i++) if(a[x]==b[i]) x++;
    cout << x+1 << endl;
    return 0;
}