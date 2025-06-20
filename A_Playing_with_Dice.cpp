#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    int x=abs(a-b)-1;
    if(a==b) cout << "0 6 0";
    else if(a<b){
        if(x%2) cout << a+x/2 << " 1 " << 6-(a+x/2)-1;
        else  cout << a+x/2 << " 0 " << 6-(a+x/2);
    }else{
        if(x%2) cout << 6-(b+x/2)-1 << " 1 " << b+x/2;
        else  cout << 6-(b+x/2) << " 0 " << b+x/2;
    }

    return 0;
}