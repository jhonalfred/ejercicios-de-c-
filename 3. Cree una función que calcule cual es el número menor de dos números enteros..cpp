 //3. Cree una funci�n que calcule cual es el n�mero menor de dos n�meros enteros.//
 
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
