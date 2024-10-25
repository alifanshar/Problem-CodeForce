#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;
    int x=0, y=0;
    for(int i=0;i<a.length();i++){
        if(a[i]>=92){
            y++;
        }else{
            x++;
        }
    }
    if(x>y){
        for(int i=0;i<a.length();i++)a[i]=toupper(a[i]); 
    }else{
        for(int i=0;i<a.length();i++)a[i]=tolower(a[i]); 
    }
    cout << a;
    return 0;
}