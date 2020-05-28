#include <iostream>
using namespace std;
int main(){
    float p,r;
    cin >> p >> r; 
    if(p==0){
        cout << "C";
    }
    else if(p==1 and r==1){
        cout << "A";
    }
    else {
        cout << "B";
    }
    return 0;
}
/*Se P==0; caminho C
se p==1 e r==1; caminho A
se nao; caminho B*/