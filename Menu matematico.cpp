#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int numero,opc,resultado=0;
	cout<<"\tBienvenido a su menu matematico"<<endl;
	cout<<"Digite un numero : ";cin>>numero;
	cout<<"1. Cubo del numero"<<endl;
	cout<<"2. Es par o impar"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion:"<<endl;cin>>opc;
	
	switch(opc){
		case 1: 
		resultado=pow(numero,3);
		cout<<"El cubo es :"<<resultado;break;
		case 2:
			if(numero==0){
				cout<<"el numero es cero";
			}
			else if(numero%2==0){
				cout<<"el numero es par";
			}
			else {
				cout<<"el numero es impar";
			}
		case 3: break;
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
