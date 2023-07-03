//13. Calcule el área de un cuadrado //

#include<stdio.h>
#include<cmath>

float area(float l){
float A;
A = pow(l,2);
return A;
}
int main(){
float l;
printf("\n Ingrese un lado del cuadrado: \n \n ");
scanf("%f",&l);
printf("\n El area del cuadrado es: %.f \n \n ",area(l));
return 0;
}
