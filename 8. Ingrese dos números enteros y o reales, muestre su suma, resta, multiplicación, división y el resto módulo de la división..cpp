 //8. Ingrese dos n�meros enteros y o reales, muestre su suma, resta, multiplicaci�n, divisi�n y el resto m�dulo de la divisi�n.//
 
 #include<iostream>
 #include<stdio.h>
#include<math.h>

int sum(int a,int b,int z){
z = a + b;
return z;
}
int res(int a,int b,int z){
z = a - b;
return z;
}
int mult(int a,int b,int z){
z = a * b;
return z;
}
int div(int a,int b,int z){
z = a / b;
return z;
}
int resid(int a,int b,int z){
z = a % b;
return z;
}
int main(){
int a,b;
int z;
printf("\n Ingrese 2 numeros enteros: \n \n");
scanf("%d %d",&a,&b);
printf("\n La suma de %d y %d es %d \n",a,b,sum(a,b,z));
printf("\n La resta de %d y %d es %d \n",a,b,res(a,b,z));
printf("\n La multiplicacion de %d y %d es %d \n",a,b,mult(a,b,z));
printf("\n La division de %d y %d es %d con",a,b,div(a,b,z));
printf(" el residuo de %d \n",resid(a,b,z));
return 0;
}
