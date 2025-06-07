#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, k, x; cin >> n >> k >> x;
    if((k==1 && x==1) || (n%2==1 && x==1 && k<3)) cout << "NO";
    else{
        cout << "YES\n";
        int a=(k!=x) ? k:k-1;
        vector<int> b((n+a-1)/a);
        for(int i=0;i<b.size()-1;i++){
            if(n>a) b[i]=a;
            n-=a;
            if(n==1 && x==1){
                b[i]--;
                n++;
            }
        }
        if(n!=x) b[b.size()-1]=n;
        else{
            b[b.size()-1]=n-1;
            b.push_back(1);
        }
        cout << b.size() << endl;
        for(auto i:b) cout << i << " ";
    }
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}