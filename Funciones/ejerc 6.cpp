#include<iostream>
#include<conio.h>
using namespace std;

template <class TIPOD>
void maximo(TIPOD x,TIPOD y, TIPOD z);

int main(){
	char n1='a';
	char n2='b';
   char  n3='z';
	
	maximo(n1,n2,n3);
	
	
	
	getch();
	return 0;
}
template <class TIPOD>
void maximo(TIPOD x,TIPOD y, TIPOD z){
	if (x>y and x>z){
		cout<<"El mayor es : "<<x<<endl;
	}
	else if(y>x and y>z){
		cout<<"El mayor es : "<<y<<endl;
	}
	else if (z>x and z>y){
		cout<<"El mayor es : "<<z<<endl;
	}
	
	
}
	
	
	
	
	

