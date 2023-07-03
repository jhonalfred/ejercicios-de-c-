//15. Desarrolle una función que reciba un número y devuelva el valor 1 si es un número primo o 0 en caso contrario.//

#include<iostream>
#include<iostream>
using namespace std;

int proc(int num){
int cont = 0;
for(int i = 1;i <= num;i++){
if(num % i == 0){
cont = cont+1;
}
}
return cont;
}
int main(){
int num;
cout<<"\n Ingrese el numero: \n \n";
cin>>num;
if(proc(num) == 2){
cout<<"\n \n \n 1 \n \n \n";
}
else{
cout<<"\n \n \n 0 \n \n \n";
}
return 0;
}
