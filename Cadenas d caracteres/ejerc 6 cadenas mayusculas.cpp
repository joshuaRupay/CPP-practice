#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char letra[]="joshua";
	char letra2[]="joshua";
	
	strupr(letra);
	strupr(letra2);
	
	cout<<letra<<endl;
	cout<<letra2<<endl;
	
	if (strcmp(letra,letra2)==0){
		cout<<"Las cadenas son iguales ";
		
	}
	else {
		cout<<"Las cadenas son distintas";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
