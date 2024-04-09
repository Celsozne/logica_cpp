#include <iostream>
#include <cmath>

using namespace std;

void menu();
void somar();
void subtrair();
void multiplicar();
void dividir();
void restoDiv();
void potencia();

int main() {
    menu();
    return 0;
}

void menu() {
    int opcao;  // Use int for menu options

    system("clear");  // Clear the console
    cout << "Menu\n";  // Use cout for output
    cout << "1 - Somar\n";
    cout << "2 - Subtrair\n";
    cout << "3 - Multiplicar\n";
    cout << "4 - Dividir\n";
    cout << "5 - Resto da divisao\n";
    cout << "6 - Potencia\n";
    cout << "0 - Sair\n";

    cout << "Qual e a opcao desejada? ";
    cin >> opcao;  // Use cin for input

    switch (opcao) {  // Compare opcao directly
        case 1:
            somar();
            break;
        case 2:
            subtrair();
            break;
        case 3:
            multiplicar();
            break;
        case 4:
            dividir();
            break;
        case 5:
            restoDiv();
            break;
        case 6:
            potencia();
            break;
        case 0:
            exit(0);
        default:
            menu();
    }
}

void somar() {
    double v1, v2;  // Only two variables needed

    cout << "Digite o primeiro valor: ";
    cin >> v1;
    cout << "Digite o segundo valor: ";
    cin >> v2;

    cout << "A soma dos valores e: " << v1 + v2 << endl;
}

void subtrair() {
    double v1, v2;

    cout << "Digite o primeiro valor: ";
    cin >> v1;
    cout << "Digite o segundo valor: ";
    cin >> v2;

    cout << "A subtracao resulta em: " << v1 - v2 << endl;
}

void multiplicar(){
    double v1,v2;

    cout << "Digite o primeiro valor: " ;
    cin >> v1;
    cout << "digite o segundo valor: ";
    cin >> v2;

    cout << "O valor da multiplacao sera: "<< v1 * v2 << endl; 
}

void dividir() {
    double v1, v2;

    cout << "Digite o dividendo: ";  // Prompt for dividendo first
    cin >> v1;
    cout << "Digite o divisor: ";
    cin >> v2;

    while (v2 == 0) {  // Use a loop for repeated input if divisor is 0
        cout << "Impossivel dividir por 0, digite outro valor: ";
        cin >> v2;
    }

    cout << "O resultado sera: " << v1 / v2 << endl;  // Use endl for newline
}

void restoDiv() {
    int v1, v2;

    cout << "Digite o dividendo: ";
    cin >> v1;
    cout << "Digite o divisor: ";
    cin >> v2;

    while (v2 == 0) {
        cout << "Impossivel dividir por 0, digite outro valor: ";
        cin >> v2;
    }

    cout << "O resto da divisao sera: " << v1 % v2 << endl;
}

void potencia() {
    double v1, v2;

    cout << "Digite a base: ";
    cin >> v1;
    cout << "Digite o expoente: ";
    cin >> v2;

    cout << "O resultado sera: " << pow(v1, v2) << endl;  // Use pow() for power
}
