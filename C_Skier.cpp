#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    string s; cin >> s;
    int n = s.size();
    int ans=0, x=0, y=0;
    map<pair<int, int>, bool> mp, mp1;
    for(int i=0;i<n;i++){
        if(s[i]=='N')
        {
            if(mp[{x,y+1}])ans+=1;
            else ans+=5, mp[{x,y+1}]=1;
            y++;
        }
        else if(s[i]=='S'){
            if(mp[{x,y}])ans+=1;
            else ans+=5 ,mp[{x,y}]=1;
            y--;
        }
        else if(s[i]=='E')
        {
            if(mp1[{x+1,y}])ans+=1;
            else ans+=5, mp1[{x+1,y}]=1;
            x++;
        }
        else
        {
            if(mp1[{x,y}])ans+=1;
            else ans+=5, mp1[{x,y}]=1;
            x--;
        }
    }

    cout << ans;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}