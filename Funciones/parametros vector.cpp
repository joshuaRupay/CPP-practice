#include<iostream>
#include<conio.h>
using namespace std;

void cuadrado(int vec[],int);
void despl(int vec[],int);
int main(){
	const int TAM=5;
	int vec[TAM]={1,2,3,4,5};
	cuadrado( vec,TAM);
	despl(vec, TAM );
	
	
	
	
	getch();
	return 0;
}
void cuadrado(int vec[],int tam){
	for(int i=0;i<tam;i++){
		vec[i]*=vec[i];
	}
}
void despl(int vec[],int tam ){
	for(int i=0;i<tam;i++){
		cout<<vec[i]<<" ";
	}
}
