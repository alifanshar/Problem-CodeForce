#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a;

    for(int i=0;a.size()<1000;i++){
        if(i%10 == 3 || i%3 == 0)continue;
        a.push_back(i);
    }

    for(int i=0;i<n;i++){
        int x; cin >> x;
        cout << a[x-1] << endl;
    }

    return 0;
}