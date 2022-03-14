#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char cad[100];
char cad3[100];
	cout<<"Digite una frase o palabra polindroma: ";cin.getline(cad,100);
strcpy(cad3,cad);
strrev(cad);
	if(strcmp(cad,cad3)==0){
		cout<<"La frase es polindroma";
	}
	else{
		cout<<"No es polindroma xd ";
	}
	
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
