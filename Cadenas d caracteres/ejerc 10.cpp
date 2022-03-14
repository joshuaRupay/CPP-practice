#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
 
 char frase[30];
 char cambio[30];
 char agregar[]={" Buena broma"};


 
 cout<<"Digite una palabra hasta 30 letras : ";
 cin.getline(frase,30,'\n');
 
 for(int i=0;i<10;i++){
  cambio[i] = frase[i]; 
 }
 strcat(cambio,agregar);
    cout<<cambio<<endl;
 
  getch();
 return 0;
}
