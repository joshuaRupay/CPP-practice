#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int n,suma=0;
	cout<<"Digite la cantidad de elementos:";cin>>n;
	for (int i=1;i<=2*n-1;i+=2 ){
		
		suma+=i;
	}
	cout<<"el resultado es :"<<suma<<endl;
	
	
	
	
	
	system("pause");
	return 0;
}
