 //1. Crear una funci�n que permita calcular el cubo de un n�mero real (float)//

#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
    float Cubo(float n2)
    {
        float x;
        x=pow (n2,3);
        return x;
    }
       
     main()
    {
        float n1;
        cout<<"El cubo de un numero"<<endl;
        cout<<"Ingrese el numero: ";cin>>n1;
        cout<<"El cubo del numero es: "<<Cubo(n1)<<endl;
        system ("pause");
        return 0;
    }
