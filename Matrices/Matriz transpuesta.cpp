#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int matriz[3][3];
	int matriz2[3][3];
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout <<"Digite un numero ["<<i<<"]["<<j<<"] : ";cin>>matriz[i][j];
			
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			matriz2[i][j]=matriz[j][i];
			
		}
	}
	cout<<"La matriz transpuesta es: \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz2[i][j]<<" ";
			
			
		}
		cout<<"\n";
	}
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
