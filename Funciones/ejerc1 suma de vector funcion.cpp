#include<iostream>
#include<conio.h>
using namespace std;
void pedir();
int suma(int vec[], int);
int vec[100],tam;

int main(){
 pedir();
 cout<<"\nLa suma de los elementos es: "<<suma( vec,tam)<<endl;

	getch();
	return 0;
}
void pedir(){
	cout<<"Digite el numero de elementos: ";cin>>tam;
	for(int i=0;i<tam;i++){
		cout<<i+1<<". Digite un numero: ";cin>>vec[i];
		
	}
}
int suma(int vec[],int tam){
	int Suma=0;
	for(int i=0;i<tam;i++){
		Suma+=vec[i];
		
	}
	return Suma;
}
