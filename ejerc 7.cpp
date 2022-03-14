#include<iostream>
using namespace std;

int main (){
	
	float practicas, parcial, examen_final, nota_final = 0;
	
	cout<<"Digite la nota de practicas: "; cin>>practicas;
	cout<<"Digite la nota del parcial: "; cin>>parcial;
	cout<<"Digite la nota del examen final: "; cin>>examen_final;
	
	practicas *= 0.12; //Peso de practicas calificadas
	parcial *= 0.44; //Peso del examen parcial
	examen_final *= 0.44; //Peso del examen final
	
	nota_final = practicas + parcial + examen_final;
	cout<<"\n La nota final es: "<< nota_final;
	
	return 0;
}




