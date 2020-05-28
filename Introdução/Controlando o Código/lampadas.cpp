#include <iostream>
using namespace std;
int main(){
    int n, interrup, A=0, B=0;
    cin >> n;
    int i=0;
    for(i=0;i<n;i++){
        cin >> interrup;
        A = !A;
		if (interrup == 2) B = !B;
    }
    cout << A << endl << B;
    return 0;
}