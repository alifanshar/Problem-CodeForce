#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a;
    cin >> b;
    int n=b.length(), max;
    max = (a.length()>b.length()) ? a.length() : b.length();
    for(int i=0;i<max;i++){
        if(a[i] != b[--n]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}