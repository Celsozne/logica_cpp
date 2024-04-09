#include <iostream>
#include <cmath>

using  namespace std;

int main(){
    float l,a;
    cout << "Digite o lado do quadrado: ";
    cin >> l;
    a = pow(l,2);
    cout << "O lado do quadrado e: "<<l<<" tem a area: "<<a<<" e o dobro sera: "<<a *2<< endl;
    return 0;
}