#include<iostream>
#include<conio.h>
using namespace std;

void pedirdatos ();
void al_cuadrado(float x);
float n;
int main(){
pedirdatos ();
 al_cuadrado(n);
	
	getch();
	return 0;
}
void pedirdatos (){
	cout<<"Digite un numero: ";cin>>n;
}
void al_cuadrado(float x){
	float alcuadr =x*x;
	cout<<"El cuadrado es: "<<alcuadr<<endl;
}
