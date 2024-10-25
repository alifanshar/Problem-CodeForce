#include<iostream>
using namespace std;

int main(){
    int a, b=0;
    cin >> a;
    char x[a];
    for(int i=0;i<a;i++)cin >> x[i];
    for(int i=0;i<a;i++){
        if (x[i]==x[i+1])b++;
    }
    cout << b;
    return 0;
}