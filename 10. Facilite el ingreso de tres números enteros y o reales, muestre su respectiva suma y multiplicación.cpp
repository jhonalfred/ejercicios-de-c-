 //10. Facilite el ingreso de tres números enteros y/o reales, muestre su respectiva suma y multiplicación//
 
#include<iostream>
#include<stdio.h>

float sum(float a,float b){
float c;
c = a + b;
return c;
}
float mult(float a,float b){
float d;
d = a * b;
return d;
}
int main(){
float a,b;
printf("\n Ingrese dos numeros: \n \n");
scanf("%f %f",&a,&b);
printf("\n La suma de los \t \t la multiplicion de los \n");
printf(" numeros ingresados es: \t numeros ingresados es: \n \n");
printf(" %.3f \t \t \t %.3f ",sum(a,b),mult(a,b));
return 0;
}
