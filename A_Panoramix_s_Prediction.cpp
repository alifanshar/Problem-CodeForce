#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    vector<int> x = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    
    auto z = find(x.begin(), x.end(), a);
    int c = distance(x.begin(), z);

    if(x[c+1] == b) cout << "YES";
    else cout << "NO";

    return 0;
}