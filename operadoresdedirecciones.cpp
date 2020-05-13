#include "iostream"

using namespace std;

int main(void)
{
    int a, b;
    int *p, *r;
    float c, *w;

    cout << "La direccion de a es: " << &a << endl;
    cout << "La direccion de b es: " << &b << endl;
    cout << "La direccion de c es: " << &c << endl;

    p = &a;
    r = &b;
    w = &c; 

    cout << endl; 
    cout << "La direccion de a es: " << p << endl;
    cout << "La direccion de b es: " << r << endl;
    cout << "La direccion de c es: " << w << endl;

    cout << endl;

    return 0;


}