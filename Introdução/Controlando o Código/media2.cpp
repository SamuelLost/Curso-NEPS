#include <iostream>
using namespace std;
int main(){
    float x, y, media;
    cin >> x >> y;
    media = (x+y)/2; 
    if(media>=7){
        cout << "Aprovado";
    }
    else if(media<7 and media>=4){
        cout << "Recuperacao";
    }
    else {
        cout << "Reprovado";
    }
    return 0;
}