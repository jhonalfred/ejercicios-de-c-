 //3. Cree una función que calcule cual es el número menor de dos números enteros.//
 
 #include <iostream>
using namespace std;

    short Menor(short n1, short n2)
    {
        short m;
        if(n1<n2) m=n1;
        else if(n2<n1)m =n2;
        return m;
    }
   
    main()
    {
        short a1,a2;
        cout<<"Calculo del numero menor\n";
        cout<<"Ingrese 2 numeros: \n";cin>>a1>>a2;
        cout<<"El numero menor es: \n"<<Menor(a1,a2);
        cout<<endl;
    system("pause");
    return 0;
    }
