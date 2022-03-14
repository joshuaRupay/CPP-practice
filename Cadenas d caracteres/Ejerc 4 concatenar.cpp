#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char cad[]="Hola que tal ";
	char cad2[100];
	cout<<"Digite su nombre: ";cin.getline(cad2,100);
	
	strcat(cad,cad2);
	cout<<cad<<endl;
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
