#include <iostream>  // Include header for input/output operations
#include <cmath>     // Include header for math functions (like pow)

using namespace std;  // Use the std namespace

int main() {
    float raio;
    double pi = atan2(1.0, 0.0) * 4;  // Calculate pi using atan2 and multiply by 4

    cout << "Digite o valor do raio: ";  // Prompt for radius input
    cin >> raio;

    cout << "O valor da area e: " << pi * pow(raio, 2) << endl;  // Calculate and print area

    return 0;  // Indicate successful program termination
}




