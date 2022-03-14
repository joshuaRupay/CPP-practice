#include<iostream>
using namespace std;
int main(){
	int edad=12;
	int * pedad;
	pedad= &edad;
	cout<<edad<<endl;
	cout<<&pedad<<endl;	
	cout<<*pedad<<endl;	
	
	return 0;
	
}
