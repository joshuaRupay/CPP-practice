#include<iostream>
using namespace std;
int main(){
	int menor=0;
	int mayor=999;
	int numero[5];
	for(int i=0;i<5;i++){
		cout<<"Digite un numero: ";cin>>numero[i];
	
	}
	for(int i=0;i<5;i++){
	if(numero[i]<mayor and numero[i]>0){
		mayor=numero[i];
		cout<<"El menor numero positivo es: "<<mayor;
	}
	cout<<"\n";
	if(numero[i]<menor ){
		menor=numero[i];
		cout<<"El mayor numero positivo es: "<<menor;
	}
}
	
	return 0;
}
