#include <iostream>
using namespace std;

int main(){

    int n, X = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        string s = "";
        cin >> s;
        if(s == "X++"){
            X++;
        }else if(s == "++X"){
            ++X;
        }else if(s == "X--"){
            X--;
        }else if(s == "--X"){
            --X;
        }
    }
    cout << X;

    return 0;
}