#include "iostream"

using namespace std;

int main(void)
{
    int a, b, sum, sub, prod; 
    float div; 

    cout << "PRUEBAS CON OPERADORES" << endl << endl;

    cout << "Digite el valor de a: ";
    cin >> a;

    cout << "Digite el valor de b: ";
    cin >> b;

    sum = a + b;
    cout << "La suma es: " << sum << endl; 

    sub = a - b;
    cout << "La resta es: " << sub << endl;

    prod = a * b;
    cout << "El producto es: " << prod << endl;

    div = (float) a / b;
    cout << "La division es: " << div << endl;

}