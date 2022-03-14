#include<iostream>
using namespace std;
int main(){
	int n,num;
	int contCifras=0,contNum=0;
	
	do{
		cout<<"Ingrese la cantidad de numeros: ";cin>>n;
	}while(n<0);
	
	for (int i =0;i<n;i++){
		cout<<"ingrese un numero: ";cin>>num;
		while(num>0)
		{
		int r = num%10;
		num = num/10;
		contCifras ++;
		}
		if (contCifras%2!=0)
		{
			contNum++;
		}
		contCifras=0;
	}
	cout<<"La cantidad de numeros con cifras impar es: "<<contNum<<endl;
	return 0;
}
