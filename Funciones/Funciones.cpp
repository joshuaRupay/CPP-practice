#include<iostream>
using namespace std;

int encontrarMax(int n1,int n2);

int encontrarMax(int n1,int n2)
{
	int mayor;
	if(n1 > n2){
		mayor = n1;
	}
	else{
		mayor = n2;
	}
}

int main()
{
	int primer_numero;
	int segundo_numero;
	
	cout<<"Digite el primer numero: ";cin>>primer_numero;
	cout<<"Digite el segundo numero: ";cin>>segundo_numero;
	
	cout<<"El mayor numero de los dos es: "<<encontrarMax(primer_numero,segundo_numero)<<endl;
	
	return 0;
}


