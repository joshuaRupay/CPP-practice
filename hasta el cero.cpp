#include <iostream>
using namespace std;

int main(){
 int  i=0, n=0;
 
 do{
  cout<<"Ingrese un numero :"; cin>>n;
  
  if(n>0){
   i++;
  }
 } while(n!=0);
 
 cout<<"La cantidad de veces que se ha ingresado un numero MAYOR a cero ha sido de "<<i;
 
 return 0;
}
