#include<iostream>
#include<conio.h>
#include<string.h>


using namespace std;
struct Alumno{
	char nombre [20];
	int edad;
	int promedio;
	
}alumnos[3];
int main(){
	
int n,mayor=0;
	
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"Nombre: ";cin.getline(alumnos[i].nombre,20,'\n');
	cout<<"Edad: ";cin>>alumnos[i].edad;
	cout<<"Promedio: ";cin>>alumnos[i].promedio;
	cout<<"\n";
	
		if(alumnos[i].promedio>mayor){
			mayor = alumnos[i].promedio;
		n=i;
		}		
}
	
	 cout<<"El mejor resultado es de :"<<endl;
	 cout<<"Nombre : "<<alumnos[n].nombre<<endl;
	 cout<<"Edad: "<<alumnos[n].edad<<endl;
	 cout<<"Promedio: "<<alumnos[n].promedio<<endl;
	    
	
	
	
	getch();
	return 0;
}


