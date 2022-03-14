#include<iostream>
#include<conio.h>
using namespace std;
void pedir();
void fun(int vec[],int);


int vec[100],tam;
int main(){
	pedir();
	fun(vec,tam);
	
	getch();
	return 0;
}
void pedir(){
	cout<<"Digite la cant de elementos: ";cin>>tam;
	for(int i=0;i<tam;i++){
		cout<<i+1<<". Digite un numero: ";cin>>vec[i];
		
	}	
}
void fun(int vec[],int tam){
	cout<<"\n";
	for(int i=0;i<tam;i++){
		if ( vec[i]%2!=0){
			cout<<vec[i]<<" ";
		}
	}
}



