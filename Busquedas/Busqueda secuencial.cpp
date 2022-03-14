//busqueda secuencial

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	char a[]={'e','i','o','a','u'},dato;
	int i;
	char band='F';
	
	dato ='o';
	
	
	i=0;
	while((band=='F')&&(i<5)){
		if(a[i]==dato){
			band ='V';
		}
		i++;
	}
	if(band=='F'){
		cout<<"El numero a buscar no existe en el arreglo"<<endl;
		
		
	}
	else if(band=='V'){
		cout<<"El numero ha sido encontrado en la pos: "<<i-1<<endl;
	}
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
