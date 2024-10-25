#include <iostream>
using namespace std;

int main(){

    int n;
    string a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if(a.size()<=10){
            cout << a << endl;
        }else{
            cout << a[0] << a.length()-2 << a[a.length()-1] << endl;
        }
    }
    

    return 0;
}