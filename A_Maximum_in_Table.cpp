#include<bits/stdc++.h>
using namespace std;

int solve(int x, int y){
    if(x==1 || y==1) return 1;
    return solve(x-1, y) + solve(x, y-1);
}

int main(){
    int n; cin >> n;
    cout << solve(n, n) << endl;
    return 0;
}