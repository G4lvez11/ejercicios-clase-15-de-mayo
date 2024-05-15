#include <iostream>
using namespace std;
int main ()

{
    float angulo=0.00;

     cout << " Ingrese el valor de su angulo  " << "\n";
     cin>> angulo;
    
    if (angulo < 90)
    {
        cout << " Su angulo es agudo " << "\n";
    }

    else if (angulo > 90) 
    {
        cout << " Su angulo es obtuso " << "\n";
    }

    else 
    {
       cout << " Su angulo es recto " << "\n";
    }

    return 0;

}

    