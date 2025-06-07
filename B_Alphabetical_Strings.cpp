#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    string s, x="a"; cin >> s;
    
    char a='a';
    bool cek=true;
    int n=s.length();
    
    for(int i=0;i<n-1;i++){
        a++;
        if((s.find(x+a)!=string::npos) || (s.find(a+x)!=string::npos)){
            if(s.find(x+a)!=string::npos) x=x+a;
            else x=a+x;
        }else cek=false;
    }
    
    if(s!=x && n==1) cek=false;
    cout << (cek?"YES":"NO");
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}