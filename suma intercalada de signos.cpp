#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n,suma=0,signo=1;
	cout<<"Digite la cantidad de elementos: ";cin>>n;
	 for (int i=1;i<=n;i++){
	 	suma+=i*signo;
	 	signo*=-1;
	 }

	
	cout<<"El resultado final es: "<<suma<<endl;
	
	
	
	
	
	
	getch();
	return 0;
}
