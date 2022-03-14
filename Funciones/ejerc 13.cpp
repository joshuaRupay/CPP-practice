#include<iostream>
#include<conio.h>
using namespace std;

//Prototipos de Funciones
void pedir();
void cambiar(int vec[],int);
void mostrar(int vec[],int);


int tam,vec[100];

int main(){
	//Llamada a las funciones - en orden
	pedir();
	cambiar(vec,tam);	
	mostrar(vec,tam);
	
	getch();
	return 0;
}

void pedir(){
	cout<<"Digite el tamanio del vector: ";
	cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>vec[i];
	}
}

void cambiar(int vec[],int tam){
	for(int i=0;i<tam;i++){
		vec[i] *= -1;
	}
}

void mostrar(int vec[],int tam){
	cout<<"\nMostrando vector con cambio de signo: "<<endl;
	for(int i=0;i<tam;i++){
		cout<<vec[i]<<" ";
	}
}
