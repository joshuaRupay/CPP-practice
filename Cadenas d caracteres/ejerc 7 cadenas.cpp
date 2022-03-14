#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char nombre[100];
	cout<<"Digite su nombre en mayuscula : ";gets(nombre);
	
	if (nombre[0]=='A'){
		strlwr(nombre);
		cout<<nombre;
	} 
	else{
		cout<<nombre<<endl;
	}

	




	
	
	
	
	getch();
	return 0;
}
