#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    array<int, 3> dp = {{0, 0, 0}};
    for (char c : s) {
        if (c == 'Q') {
            dp[2] += dp[1];
            dp[0] += 1;
        } else if (c == 'A') {
            dp[1] += dp[0];
        }
    }
    for(auto i : dp) cout << i << " ";
    return 0;
}