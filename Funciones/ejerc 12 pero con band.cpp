#include<iostream>
#include<conio.h>
using namespace std;
void pedir();
void fun(int vec[],int );
int vec[100],tam;
char band='F';
int main(){
	pedir();
	fun(vec,tam );
	
	getch();
	return 0;
}
void pedir(){
	cout<<"Digite el numero de elementos: ";cin>>tam;
		for(int i=0;i<tam;i++){
		cout<<i+1<<". Digite un numero: ";cin>>vec[i];	
	}
}
void fun(int vec[],int tam ){
	for (int i=1;i<tam;i++){
		if(vec[i]>=vec[i-1]){
			band='V';
	}
	else{
		band='F';
	}
		}
	if(band=='V'){
		cout<<"Si esta ordenado crecientemente";
	}
	else{
		cout<<"No esta ordenado crecientemente";
	}	
	}
	

