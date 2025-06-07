#include<bits/stdc++.h>
using namespace std;

void solve(){
    int sum=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            char x; cin >> x;
            if(x=='X'){
                if(i==0 || j==0 || i==9 || j==9) sum++;
                if((i==1 && j>0 && j<9) || (j==1 && i>0 && i<9) || (i==8 && j>0 && j<9) || (j==8 && i>0 && i<9)) sum+=2;
                if((i==2 && j>1 && j<8) || (j==2 && i>1 && i<8) || (i==7 && j>1 && j<8) || (j==7 && i>1 && i<8)) sum+=3;
                if((i==3 && j>2 && j<7) || (j==3 && i>2 && i<7) || (i==6 && j>2 && j<7) || (j==6 && i>2 && i<7)) sum+=4;
                if((i==4 && j>3 && j<6) || (j==4 && i>3 && i<6) || (i==5 && j>3 && j<6) || (j==5 && i>3 && i<6)) sum+=5;
            }
        }
    }
    cout << sum << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}