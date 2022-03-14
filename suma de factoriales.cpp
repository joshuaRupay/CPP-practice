#include<iostream>
#include<conio.h>
using namespace std;
int main(){

	int n,suma=0,factorial=1;
	cout<<"Digite la cantidad de elementos: ";cin>>n;
	for(int i=1;i<=n;i++){
		
			factorial*=i;
		suma+=factorial;
		}
		
    
	cout<<"El resultado es:"<<suma<<endl;
	
	
	
	
	
	getch();
	return 0;
}
