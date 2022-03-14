#include<iostream>
using namespace std;
struct fecha{
	int dia;
	int mes;
	int anio;
	
}f;
int main(){
	cout<<"Digite el dia: ";cin>>f.dia;
	cout<<"Digite el mes: ";cin>>f.mes;
	cout<<"Digite el anio: ";cin>>f.anio;
	if(f.anio<0){
		cout<<"Fecha Incorrecta";
	}
	else{
	switch(f.mes){
		case 1: 
			if(f.dia<1 or f.dia >31){
				cout<<"Fecha incorrecta";
			}
			else{
				cout<<"Fecha valida";
			}break;
		case 2:
			if(f.anio%4==0 or f.anio%400==0){
				if(f.dia<1 or f.dia>29){
					cout<<"Fecha incorrecta";
				}
				else if ((f.dia>1 and f.dia<29)or f.dia==29){
				cout<<"Fecha valida";
			}
			}
			else{
				if(f.dia<1 or f.dia>28){
					cout<<"Fecha incorrecta";
				}
				else{
				cout<<"Fecha valida";
			}
			} break;
		case 3:
			if(f.dia<1 or f.dia >31){
				cout<<"Fecha incorrecta";
			}
			else{
				cout<<"Fecha valida";
			}break;
		case 4:
			if(f.dia<1 or f.dia >30){
				cout<<"Fecha incorrecta";
			}
			else{
				cout<<"Fecha valida";
			}break;
		case 5:
			if(f.dia<1 or f.dia >31){
				cout<<"Fecha incorrecta";
			}
			else{
				cout<<"Fecha valida";
			}break;
		case 6:
			if(f.dia<1 or f.dia >30){
				cout<<"Fecha incorrecta";
			}	
			else{
				cout<<"Fecha valida";
			}break;
		case 7:
			if(f.dia<1 or f.dia >31){
				cout<<"Fecha incorrecta";
			}
			else{
				cout<<"Fecha valida";
			}break;	
		case 8:
			if(f.dia<1 or f.dia >31){
				cout<<"Fecha incorrecta";
			}
			else{
				cout<<"Fecha valida";
			}break;	
		case 9:
			if(f.dia<1 or f.dia >30){
				cout<<"Fecha incorrecta";
			}
			else{
				cout<<"Fecha valida";
			}break;	
		case 10:
			if(f.dia<1 or f.dia >31){
				cout<<"Fecha incorrecta";
			}
			else{
				cout<<"Fecha valida";
			}break;	
		case 11:
			if(f.dia<1 or f.dia >30){
				cout<<"Fecha incorrecta";
			}	
			else{
				cout<<"Fecha valida";
			}break;
		case 12:
			if(f.dia<1 or f.dia >31){
				cout<<"Fecha incorrecta";
			}
			else{
				cout<<"Fecha valida";
			}break;
  default: cout<<"Fecha incorrecta";					
	}	
	}
	return 0;
}
