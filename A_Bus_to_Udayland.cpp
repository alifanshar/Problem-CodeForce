#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    bool cek=false;
    for(int i=0;i<n;i++){
        if((a[i][0]==a[i][1] && a[i][0]=='O') || (a[i][3]==a[i][4] && a[i][3]=='O')){
            cek=true;
            if(a[i][0]==a[i][1] && a[i][0]=='O') a[i][0]=a[i][1]='+';
            else a[i][3]=a[i][4]='+';
            break;
        }
    }
    if(cek){
        cout << "YES\n";
        for(int i=0;i<n;i++)
            cout << a[i] << "\n";
    }else cout << "NO";
    return 0;
}