#include "iostream"
#include "cmath"

using namespace std;

int main(void)
{
    int a = 7, b = 3, res, pot;

    cout << "MAS PRUEBAS CON OPERADORES" << endl << endl;

    res = a % b; 
    cout << "El residuo de la division entera es: " << res << endl;

    pot = pow(a, b); 
    cout << "La potencia es: " << pot << endl;

    cout << "Coseno de 0.8: " << cos(0.8) << endl;

    cout << endl;

}