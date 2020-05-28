#include <iostream>
using namespace std;
int main(){
    int n, a,soma=0;
    cin >> n;
    int i=0;
    for(i=1;i<=n;i++){
        cin >> a;
        soma = soma+a;    
        if(soma>=1000000){
            break;
        }
    }
    cout << i;
    return 0;
}