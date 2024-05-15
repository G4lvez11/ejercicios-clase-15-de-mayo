#include <iostream>
using namespace std;
int main ()
{
    int edad;

     cout << " Programa para indicar si usted es mayor de edad o no" << " \n";
     cout << " Ingrese su edad " << "\n";
     cin >> edad;

    if (edad>=18)
     { 
        cout << " Usted es mayor de edad y probablemente la tumba lo llama" << "\n";
     }

    else
     {
        cout << " Usted es menor de edad y aun le queda por vivir" << " \n";
     }
     return 0;

}
