#include<iostream>
using namespace std;
int main()
{
	int c=0;
	float x[5],a=0;
	do{
		cout<<"ingrese x["<<c+1<<"]:";cin>>x[c];
		a= a+x[c];
		c=c+1;
	}while(c<5);
	c=0;
	do{
		cout<<x[c]<<endl;
		c= c+1;
	}while(c<5);
	cout<<endl<<a<<endl;
	return(0);
}
