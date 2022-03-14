#include<iostream>
#include <math.h>

using namespace std;
int main (){
	float cateto1,cateto2, hipotenusa =0;
	cout<<"Digite el cateto1:";cin>>cateto1;
	cout<<"Digite el cateto2:";cin>>cateto2;
	
	hipotenusa = (sqrt(pow(cateto1,2)+pow(cateto2,2)));
	
	cout<<"\n La hipotenusa es :"<<hipotenusa;
	
	return 0;
}
