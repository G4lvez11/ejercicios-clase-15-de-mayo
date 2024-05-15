#include <iostream>
using namespace std;
int main ()

{
    int tipoMotor; 
        cout << " Ingrese un valor entre 0 y 4 " << "\n",
        cin >> tipoMotor;

    switch (tipoMotor)
    
    {
     
     case 0:
        cout << " No esta establecido un valor definido para el tipo de bomba" << "\n";
     break;

     case 1:
        cout << " La bomba es una bomba de agua " << "\n";
     break;

     case 2:
        cout << " La bomba es una bomba de gasolina " << "\n";
     break;

     case 3:
        cout << " La bomba es una bomba de hormigón " << "\n";
     break;

     case 4:
        cout << " La bomba es una bomba de pasta alimenticia " << "\n";
     break;

     case 5:
      cout << " No existe una expresion valida " << "\n";
    break;
        
    }

    

}