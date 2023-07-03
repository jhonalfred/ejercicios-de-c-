 //6. Leer el valor correspondiente a una distancia en millas marinas y la visualice expresadas en metros, pies y nudos. Sabiendo que 1 milla marina equivale a 1852 metros.//
 
#include<stdio.h>
#define x 1609
double dista(double a, int z){
double b;
b = a * z;
return b;
}
int main(){
int a;
double b;
printf("\n Ingrese la distancia en millas: \n \n");
scanf("%i",&a);
printf("\n La distancia ingresada, en metros es: %.2f \n \n",dista(a,x));
return 0;
}
