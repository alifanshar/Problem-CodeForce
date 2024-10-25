#include<bits/stdc++.h>
using namespace std;

int main(){
    set<char> z;
    string a;
    cin >> a;

    for(int i=0;i<a.length();i++){
        z.insert(a[i]);
    }
    int x = z.size();
    if (x%2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!"; 
    }
    
    return 0;
}