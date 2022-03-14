#include<iostream>
#include<conio.h>
using namespace std;

void pedir();
void fun(int m[][100],int,int);


int m[100][100], nfilas,ncol;

int main(){
	pedir();
	fun(m,nfilas,ncol);
	
	
	getch();
	return 0;
}
void pedir(){
	cout<<"Digite el numero de filas : ";cin>>nfilas;
	cout<<"Digite el numero de columnas: ";cin>>ncol;
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";cin>>m[i][j];
			
		}
	}	
}

void fun(int m[][100],int nfilas,int ncol){
	int fila ;
	int menor =999;
	cout<<"Digite una fila: ";cin>>fila;
   
   for ( int i=0;i<nfilas;i++){
   	for (int j=0;j<ncol;j++){
   		if(i==fila-1){
   			if(m[i][j]<menor){
   			menor =m[i][j];
   		}
   		}
   		
   	}
   	
   }
   
	
	
cout<<"El menor de la fila q dijo es: "<<menor<<endl;



	
}
