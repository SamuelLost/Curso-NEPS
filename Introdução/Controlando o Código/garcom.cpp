#include <iostream>
using namespace std;
int main(){
    int n, l, c,soma=0;
    cin >> n;
    int i=1;
    while(i<=n){
        cin >> l >> c;
        if(l>c){
            soma = soma+c;
        }
        i++;
    }
    cout << soma;
    return 0;
}