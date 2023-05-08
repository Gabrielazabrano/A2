#include<iostream>
using namespace std;
float suma(float a,float b){
	float c;
	c=a+b;
	return c;
}
int main ()
{
	float x,y,z;
	cout<<" ingrese x:";cin>>x;
	cout<<"ingrese y:";cin>>y;
	z=suma(x,y);
	cout<<"el resultado es;"<<z<<endl;
	return(0);
}
