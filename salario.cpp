#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main (){
    float salariohora, horas, salariobruto;
    cout << "Quanto custa sua hora: ";
    cin >> salariohora;
    cout << "Quantas horas trabalhou: ";
    cin >> horas;
    salariobruto = salariohora * horas;
    cout <<"seu salario bruto sera: "<< salariobruto<<
    "seu salario liquido sera: "<<
    (salariobruto) - (salariobruto*(11.0/100)) - (salariobruto*(8.0/100)) - (salariobruto*(5.0/100))<< endl;

    return 0;

}