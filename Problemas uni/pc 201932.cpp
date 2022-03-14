#include<iostream>
using namespace std;
int main(){
	int n;                     
	int numero[100];
	int cont=0;
	int c;
	cout<<"la cant d elementos: ";cin>>n;
	for (int i=0;i<n;i++){
		cout<<"digite un numero: ";cin>>numero[i];
	}
	for (int i=1;i<1000;i++){
		c=i*(i+1);
		for (int i=0;i<n;i++){
		if(numero[i]==c){
			cont ++;
		}
	}

	}
	
	
	cout<<"La cantidad de numeros oblongos es: "<<cont<<endl;
	
	
	return 0;
}
