 //4.Realiza un programa que calcule las potencias de la 2 a la 10 del n�mero PI y la ra�z cuadrada de dicha potencia. Para ello construye una funci�n que calcule la potencia n�sima de un n�mero cualquiera y utiliza despu�s la funci�n sqrt de la librer�a matem�tica de C.//
 
 #include <stdio.h>
#include <math.h>
#define PI 3.14159265359
int main(){
int i;
double poten(double, int),x;
for (i = 2;i <= 10;i++) {
x = poten(PI, i);
printf("\n PI elevado a la potencia %d es igual a %5.2lf y su raiz es %5.2lf \n", i, x, sqrt(x) );
}
return 0;
}
double poten(double a, int b){
int i;
double resul;
resul = 1.0;
for (i = 1;i <= b;i++)
resul = resul * a;
return resul;
}
