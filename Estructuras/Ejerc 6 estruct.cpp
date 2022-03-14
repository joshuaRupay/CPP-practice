#include<iostream>
#include<conio.h>
using namespace std;
struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};
struct alumno{
	char nombre[20];
	char sexo[10];
	int edad;
	struct Promedio prom;
}alumnos[100];
int main(){
	int n;
	float promedio[1000];
	float mayor=0;
	int m=0;
	cout<<"Digite el numero de alumnos: ";cin>>n;
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<i+1<<". Nombre: ";cin.getline(alumnos[i].nombre,20,'\n');
		cout<<i+1<<". Sexo: ";cin.getline(alumnos[i].sexo,10,'\n');
		cout<<i+1<<". Edad: ";cin>>alumnos[i].edad;
		cout<<"\nNotas del alumno "<<i+1<<"\n";
		cout<<"Nota 1: ";cin>>alumnos[i].prom.nota1;
        cout<<"Nota 2: ";cin>>alumnos[i].prom.nota2;
        cout<<"Nota 3: ";cin>>alumnos[i].prom.nota3;
        cout<<"\n";
        
     }
          for(int i=0;i<n;i++){
		promedio[i]=(alumnos[i].prom.nota1+alumnos[i].prom.nota2+alumnos[i].prom.nota3)/3;
	if(promedio[i]>mayor){
	mayor = promedio[i];
	i=m;
	}
}
	
	cout<<"\nDatos del alumno de mayor promedio: \n";
	cout<<"Nombre: "<<alumnos[m].nombre<<endl;
	cout<<"Sexo: "<<alumnos[m].sexo<<endl;
	cout<<"Edad: "<<alumnos[m].edad<<endl;
	cout<<"Promedio: "<<promedio[m]<<endl;
	
	
	
	
	
	
	getch();
	return 0;
}
