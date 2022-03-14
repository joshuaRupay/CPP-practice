#include<iostream>
#include<conio.h>
using namespace std;
struct atleta{
	char nombre[20];
	char pais[20];
	int numero_medallas;
}atleta[100] ;
int main(){
	int nemp,mayor=0,n=0;
	cout<<"Digite el numero de empleados: ";cin>>nemp;

    for(int i=0;i<nemp;i++){
    	fflush(stdin);
    	cout<<i+1<<". Nombre: ";cin.getline(atleta[i].nombre,20,'\n');
    	cout<<i+1<<". Pais: ";cin.getline(atleta[i].pais,20,'\n');
    	cout<<i+1<<". Numero de medallas: ";cin>>atleta[i].numero_medallas;
    cout<<"\n";
	
	
	if(atleta[i].numero_medallas>mayor){
		mayor=atleta[i].numero_medallas;
		n=i;
	}
	cout<<"\n";
}
cout<<"\nEl atleta con mas medallas es: \n";
	cout<<"Nombre: "<<atleta[n].nombre<<endl;
	cout<<"Pais: "<<atleta[n].pais<<endl;
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
