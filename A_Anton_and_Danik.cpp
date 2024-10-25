#include<bits/stdc++.h>
using namespace std;

int main(){
    int x; cin >> x;
    string a; cin >> a;
    int A=0, D=0;
    for(int i=0;i<a.length();i++){
        if(a[i]=='A')A++;
        if(a[i]=='D')D++;
    }
    if(A>D){
        cout << "Anton" << endl;
    }else if(A<D){
        cout << "Danik" << endl;
    }else{
        cout << "Friendship" << endl;
    }
    return 0;
}