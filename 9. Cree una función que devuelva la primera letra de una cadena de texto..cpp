 //9. Cree una función que devuelva la primera letra de una cadena de texto.//
 
 #include<iostream>
 #include<stdio.h>
#include<stdlib.h>
 
 int main();
char primeraLetra(char palabra){
printf("\n \n Introduce la palabra: \n \n");
scanf("%c",&palabra);
return palabra;
}
int main(){
char palabra;
printf("\n La primera letra de la palabra es \"%c\"", primeraLetra(palabra));
return 0;
}
