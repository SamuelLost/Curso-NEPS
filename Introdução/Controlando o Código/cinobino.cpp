#include <iostream>
using namespace std;
int main(){
    int cino, bino;
    cin >> bino >> cino;
    if((cino+bino)%2==0){
        cout << "Bino";
    }
    else {
        cout << "Cino";
    }
    return 0;
}