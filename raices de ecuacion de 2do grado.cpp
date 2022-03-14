#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a,b,c, raiz1=0,raiz2 =0;
	cout <<"Digite la a:";cin>>a;
	cout<<"Digite la b:";cin>>b;
	cout<<"Digite la c:";cin>>c;
	
	raiz1 = (-b+(sqrt(pow(b,2)-4*a*c)))/(2*a);
	raiz2 = (-b-(sqrt(pow(b,2)-4*a*c)))/(2*a);
	
	cout<<"\n las raiz1 es :"<<raiz1<<endl;
	cout<<" las raiz2 es :"<<raiz2<<endl;
	
	
	return 0;
}
