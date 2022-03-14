#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
	char cad[100];
	char cad2[100];
	int numero1;
	float numero2;
	float suma=0;
	cout<<"Digite un numero entero : ";gets(cad);
	cout<<"Digite un numero real: ";gets(cad2);
	
	numero1=atoi(cad);
	numero2=atof(cad2);
	suma=numero1+numero2;
	
	cout<<"La suma es: "<<suma<<endl;
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
