#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	float resultado;
	float suma=0;
	cout<<"digite un numero: ";cin>>n;
	if(n%2!=0){
		for(int i=1;i<=n;i++){
			resultado = pow(i,4)+6*pow(i,3)+5;
			suma+=resultado;
		}
		cout<<suma<<endl;
	}
	else{
		for(int i=1;i<=n;i++){
			resultado = pow(i,5)+((3*pow(i,3))/20)+5;
			suma+=resultado;
		}
		cout<<suma<<endl;
	}
	
	return 0;
}
