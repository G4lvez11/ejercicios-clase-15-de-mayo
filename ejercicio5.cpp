#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a=0.00 ,b=0.00 ,c=0.00,x1=0.00,x2=0.00,res=0.00;

    cout << "El programa resuelve ecuaciones de segundo grado\n";
    cout << "Ingrese el valor de a " << "\n";
    cin >> a;
    cout << "Ingrese el valor de b " << "\n";
    cin >> b;
    cout << "Ingrese el valor de c " << "\n";
    cin >> c;

    if (a !=0 )
    {
        res = pow(b,2)-4*a*c;
        if (res >=0)
        {
            x1 = (-b+sqrt(res))/2/a;
            x2 = (-b-sqrt(res))/2/a;
            cout << "Las raices de la ecuaciones son: x1= \n" << x1 << "x2= \n" << x2 << "\n";
        }
        else
        {
            cout << "Da imaginario\n";
        }
    }
    else if (b != 0)
    {
        cout << "La ecuacion es lineal\n";
        x1 = -c/b;
        cout << "La raiz es: " << x1 << "\n";
    }
    else
    {
        cout << "Los datos ingresados son erroneos";
    }
    return 0;
    
}
