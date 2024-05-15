#include <iostream>
using namespace std;
int main ()

{
    float c1=0.00, c2=0.00 , p1=0.00 , p2= 0.00 ,  lab=0.00 , proy=0.00 , prom;
    string nombre;

        cout << " Programa para promediar notas " << "\n";
        cout << " Para iniciar ingrese sun nombre" << "\n";
        cin >> nombre;

        cout << " Ingrese la nota del corto 1" << "\n" ;
        cin >> c1;

        cout << " Ingrese la nota del corto 2" << "\n";
        cin >> c2;

        cout << " Ingrese su nota del parcial 1" << "\n";
        cin >> p1;

        cout << " Ingrese la nota del parcial 2" << "\n";
        cin >> p2;

        cout << " Ingrese la nota del lab" << "\n";
        cin >> lab;

        cout << " Ingrese la nota del proyecto "<< "\n";
        cin >> proy;

        prom = (c1* 0.1) + (c2* 0.1) + (p1* 0.2) + (p2* 0.2) + (lab*0.2) + (proy* 0.25);

    if (prom > 6 )
        {
            cout << " Usted 5" <<  nombre << " aprobo la materia"  << "\n";
        }
    
    else 
    {
        cout << " ¿Ha pensado en cambiarse de carrera?" << "\n";
    }
        
}