#include<iostream>
using namespace std;
int main()
{
	int V1[2],V2[2],R[2];
	cout<<"ingrese V1:"; cin>>V1[0]>>V1[1];
	cout<<"ingrese V2:"; cin>>V2[1]>>V2[1];
	R[0]=V1[0]+V2[0];
	R[1]=V1[1]+V2[1];
	cout<<"Rx:"<<R[0]<<" Ry:"<<R[1]<<endl;
	return(0);
}
