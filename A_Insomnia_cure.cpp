#include<bits/stdc++.h>

using namespace std;

int main(){
    long long a, b, c, d, n;
    set<int> x;
    cin >> a >> b >> c >> d >> n;
    for(int i=1;i<=n;i++)if(i%a==0 || i%b==0 || i%c==0 || i%d==0)x.insert(i);
    cout << x.size();
    return 0;
}