#include<bits/stdc++.h>
using namespace std;

int main(){
    int  n, x, s=0, d=0; cin >> n;
    vector<int> a(n); 
    for(int i=0;i<n;i++)cin >> a[i];
    for(int i=0;i<n;i++){
        if(a[0]>a[a.size()-1]){
            x = a[0];
            a.erase(a.begin());
        }else{
            x = a[a.size()-1];
            a.erase(a.end()-1);
        }
        if(i%2 == 0) s += x;
        else d += x; 
    }
    cout << s << ' ' << d << endl;
    return 0;
}