// 14. Introduzca una medida expresada en centímetros la convierta a pulgadas (1 pulgada = 2,54 centímetros).//

#include<iostream>
#include<stdio.h>
#define pulg 2.54

float convertor(float x){
float m;
m = x / pulg;
return m;
}
int main(){
float x;
printf("\n Ingrese la medida en centimetros: \n \n");
scanf("%f",&x);
printf("\n %.3f centimetros es igual a %.3f pulgadas \n \n",x,convertor(x));
return 0;
}
