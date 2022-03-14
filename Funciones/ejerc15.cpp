#include<iostream>
#include<conio.h>
using namespace std;

void pedir();
void comprobar(int m[][100],int,int);

int m[100][100], nfilas,ncol;


int main(){
	pedir();
	comprobar(m,nfilas,ncol);
	
	
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

void comprobar(int m[][100],int nfilas,int ncol){
	int cont=0;
	if ( nfilas==ncol){
    	for(int i=0;i<nfilas;i++){
		   for (int j=0;j<ncol;j++){
			
			if(m[i][j]==m[j][i]){
				cont++;
			}
			
		}
	  }
	}
	if (cont==nfilas*ncol){
		cout<<"La matriz es simetrica";
	}
	else {
		cout<<"NO es simetrica";
	}
	
}

