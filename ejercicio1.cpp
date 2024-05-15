

#include <iostream>
using namespace std;
int main ()
{
   float angulo1=0.00, angulo2=0.00 ,res=0.00;
   

   cout << " Programa para calcuclar el tercer angulo de un triangulo "<< "\n";
   cout<< " Ingrese el angulo 1"<< "\n";
     cin >> angulo1;
   cout << " Ingrese el angulo 2 "<< "\n";
     cin >> angulo2;


     //para validar angulos negativos 
     //validar que el triangulo sea mayor de 180
     // doble parentesis sirve para validar una cosa primero y luego la otra

   if ((angulo1 < 0 || angulo2 < 0) || (angulo1>180 || angulo2 > 180))
   {
    cout << " Uno de los valores ingresados no esta permitido" << "\n";
   }

   else 
   {
    res=180- angulo1-angulo2;

   cout << " El valor del tercer angulo es:"<< res;
    return 0;
   }

}