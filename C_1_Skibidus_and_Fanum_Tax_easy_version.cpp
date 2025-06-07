
#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int N, M; cin >> N >> M;
    vector<long long> A(N), B(M);
    for(int i=0;i<N;i++) cin >> A[i];
    for(int i=0;i<M;i++) cin >> B[i];
    
    bool cek=true;
    A[0]=min(A[0], B[0]-A[0]);

    for(int i=1;i<N;i++){
        long long nilai_ubah=10e9;

        if(A[i-1]<=A[i]) 
            nilai_ubah=min(nilai_ubah, A[i]);

        long long operasi=B[0]-A[i];
        if(A[i-1]<=operasi) 
            nilai_ubah=min(nilai_ubah, operasi);

        if(nilai_ubah==10e9) 
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