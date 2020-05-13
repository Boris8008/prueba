#include "iostream"
#include "string"

using namespace std; 

int main(void)
{
    int a, b, x, resp;
    string txtResp;

    cout << endl;

    cout << "PRUEBA DE OPERADORES DE COMPERACIÓN Y LÓGICOS" << endl << endl;

    cout << "Digite el limite izquierdo: ";
    cin >> a;
    cout << "Digite el limite derecho: ";
    cin >> b;
    cout << "Digite el valor: ";
    cin >> x;

    resp = a <= x && x <= b;
    
    cout << "Esta x entre a y b?: " << resp << endl;

    cout << endl;

    txtResp = a <= x && x <= b ? "si" : "no";
    cout << "Esta x entre a y b?: " << txtResp << endl;


    return 0;
   
}