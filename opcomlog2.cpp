#include "iostream"
#include "string"

using namespace std;

int main(void)
{
    int n, resp;
    string txtResp;

    cout << endl;
    cout << "REVISAR PERTENECIA DE UN VALOR  A INTERVALOS" << endl << endl;

    cout << "Digite el valor a identificar: ";
    cin >> n;

    resp = (n >= -2 && n <= 5)  ||  (n > 12 && n <= 17);
    cout << "¿Esta el valor incluido en los intervalos? " << resp << endl;

    txtResp = (n >= -2 && n <= 5)  ||  (n > 12 && n <= 17) ? "Si lo esta" : "No lo esta";
    cout << "¿Esta el valor incluido en los intervalos? " << txtResp << endl;


}