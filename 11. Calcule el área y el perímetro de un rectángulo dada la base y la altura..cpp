 //11. Calcule el área y el perímetro de un rectángulo dada la base y la altura.//
 
 #include<iostream>
 #include<stdio.h>

float area(float b,float h){
float A;
A = b * h;
return A;
}
float perim(float b,float h){
float p;
p = (2*b) + (2*h);
return p;
}
int main(){
float b,h;
printf("\n Ingrese la base del rectangulo: \n \n ");
scanf("%f",&b);
printf("\n Ingrese la altura del rectangulo: \n \n ");
scanf("%f",&h);
printf("\n El area del rectangulo es: %.3f \n \n ",area(b,h));
printf("\n Y el perimetro del rectangulo es: %.3f \n \n ",perim(b,h));
return 0;
}
