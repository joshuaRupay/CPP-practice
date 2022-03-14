#include <iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros[]={1,2,3,4,5};
	int por =1;
	
	for(int i=0; i<5;i ++){
		por *= numeros[i];
		
	}
	
	
	cout<<"El producto de los e del vector es : "<<por<<endl;
	
	
	
	
	getch();
	return 0;
}
