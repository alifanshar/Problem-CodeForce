#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N, M; cin >> N >> M;
    vector<long long> A(N), B(M);
    for(int i=0;i<N;i++) cin >> A[i];
    for(int j=0;j<M;j++) cin >> B[j];
    
    bool cek=true;

    sort(B.begin(), B.end());
    A[0] = min(A[0], B[0]-A[0]);
    for(int i=1;i<N;i++){
        long long nilai_ubah=2e9;
        
        if(A[i-1]<=A[i])
            nilai_ubah=A[i];
        
        long long target=A[i-1]+A[i];
        int j=lower_bound(B.begin(), B.end(), target)-B.begin();
        if(j!=M)
            nilai_ubah=min(nilai_ubah, B[j]-A[i]);

        if(nilai_ubah==2e9)
            cek=false;
        
        A[i]=nilai_ubah;
    }

    if(cek) cout<< "YES";
    else cout<<"NO";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}