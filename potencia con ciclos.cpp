#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int x,y,resultado=1,i=1;
cout<<"ingrese la base"<<endl;
cin>>x;
cout<<"ingrese la potencia "<<endl;
cin>>y;
while(i<=y){
resultado *=x;
i++;
}
cout<<"El resultado es "<<resultado<<endl;
getch ();
return 0;
}
