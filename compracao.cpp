#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main (){
     int n1,n2;
     float n3;
    
    cout << "Digite um numero inteiro: ";
    cin >> n1;
    cout << "Digite um outro numero inteiro: ";
    cin >> n2;
    cout << "Diigte um valor real: ";
    cin >> n3;

    cout << "a primeira operacao: "<< (n1*2) * (n2/2)<< ", a segunda operacao: "<<(n1*3)+n3<<", a terceira operacao: "<<pow(n3,3)<<endl;

    return 0;
}