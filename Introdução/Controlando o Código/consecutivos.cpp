#include <iostream>
using namespace std;
int main(){
    int cont=1, n, maior=1,i;
    cin >> n;
    int seq[n];
    for(i=0; i<n;i++){
        cin >> seq[i];
    }
    for(i=1; i<n; i++){
        if(seq[i]==seq[i-1]){
            cont++;
            if(cont > maior)
                maior = cont;
        }
        else
            cont = 1;
    }
    cout << cont;
    return 0;    
}