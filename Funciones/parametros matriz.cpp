#include<iostream>
#include<conio.h>
using namespace std;

void mostrar(int m[][3],int,int);
void cuadrado(int m[][3],int,int);
 void mostra(int m[][3],int,int);


int main(){
	const int NFILAS=2;
	const int NCOL=3;
	int m[NFILAS][NCOL]={{1,2,3},{4,5,6}};
	 mostrar(m,NFILAS,NCOL);
	cuadrado(m,NFILAS,NCOL);
	mostra(m,NFILAS,NCOL);
}
void mostrar(int m[][3],int nfilas,int ncol){
	cout<<"Mostrando matriz original:\n";
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<m[i][j]<<" ";
			
		}
		cout<<"\n";
	}
}
void cuadrado(int m[][3],int nfilas,int ncol){
	
	for(int i=0;i<nfilas;i++){
		for (int j=0;j<ncol;j++){
			m[i][j]*=m[i][j];
			
		}
	}
}
 void mostra(int m[][3],int nfilas,int ncol){
 
 cout<<"\nLa nueva matriz:\n";	
 for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<m[i][j]<<" ";
			
		}
		cout<<"\n";
	}
 }
