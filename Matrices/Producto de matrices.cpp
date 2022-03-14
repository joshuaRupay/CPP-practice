#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int matriz1[3][3];
	int matriz2[3][3];
	int matriz3[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"\nDigite los numeros de la matriz 1 , ["<<i<<"]["<<j<<"]: ";cin>>matriz1[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"\nAhora digite los numeros de la matriz 2 , ["<<i<<"]["<<j<<"]: ";cin>>matriz2[i][j];
		}
	}
	
	cout<<"\nEl producto de matrices anteriores es la siguiente matriz: "<<endl<<endl;
		for(int i=0;i<3;i++){
		 for(int j=0;j<3;j++){
			matriz3[i][j]=matriz1[i][j]*matriz2[i][j];
			cout<<matriz3[i][j]<<" ";
	}
		cout<<"\n";
}


	
	
	getch();
	return 0;	
}
	
