#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a=0, b=0, c=0, m; cin >> n;
    vector<int> x(n), y;

    for(int i=0;i<n;i++){
        cin >> x[i];
        if(x[i] == 1)a++;
        if(x[i] == 2)b++;
        if(x[i] == 3)c++;
    }

    m = min({a, b, c});
    cout << m << '\n';


    for(int i=0;i<m;i++){
        auto it = find(x.begin(), x.end(), 1);
        cout << distance(x.begin(), it)+1 << ' ';
        x[distance(x.begin(), it)] = 0;

        it = find(x.begin(), x.end(), 2);
        cout << distance(x.begin(), it)+1 << ' ';
        x[distance(x.begin(), it)] = 0;

        it = find(x.begin(), x.end(), 3);
        cout << distance(x.begin(), it)+1;
        x[distance(x.begin(), it)] = 0;
        cout << '\n';
    }

    return 0;
}