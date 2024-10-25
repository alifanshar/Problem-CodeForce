#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;getline(cin, a);
    set<char> x;
    for(int i=0;i<a.length();i++)x.insert(a[i]);
    int n=(x.size()<=3) ? x.size()-2 : x.size()-4;
    cout << n;
    return 0;
}