//12. Cree una funci�n que reciba como par�metro un numero entero y escriba la tabla de multiplicar de ese n�mero (para el 3 deber� llegar desde 3x0=0 hasta 3x10=30).//
#include<iostream>
#include<stdio.h>

void imp(int x){
for(int i = 0;i <= 10;i++){
printf(" %d x %d = %d \n \n",x,i,x * i);
}
}
int main(){
int x;
printf("\n Ingrese un numero: \n \n");
scanf("%d",&x);
printf("\n La tabla de multiplicar del numero ingresado es: \n \n");
imp(x);
return 0;
}
