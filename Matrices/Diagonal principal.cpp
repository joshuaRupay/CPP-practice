#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numeros[3][3]{1,2,3,4,5,6,7,8,9};
	
	 cout<<"La diagonal principal es: \n";
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
					if(i==j){
					cout<<numeros[i][j]<<" ";
				}
				
			}
			
			
		}


	
	
	
	
	
	
	getch();
	return 0;
}
