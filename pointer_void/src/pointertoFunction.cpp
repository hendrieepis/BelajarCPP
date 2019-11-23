//============================================================================
// Name        : pointertoFunction.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
uint16_t X;
uint32_t Y;
uint64_t Z;
void *p;
uint16_t *pointer_to_int;

int main() {
	int b=10;
	void *a=&b;
	int *ptr=(int*)a;
	cout<<*ptr;

	int aa = 10;
	void *ptra = &aa;
	printf("%d", *(int *)ptra);


	X=60000;
	Y=660000;
	Z=1250000;
	cout<<"data X:"<<X<<endl;
	p=&X;
	pointer_to_int = (uint16_t *) p;
	cout<<"data X pointer:"<<*pointer_to_int <<endl;


	cout<<"alamat X:"<<&X<<endl;
	cout<<"alamat p:"<<p<<endl<<endl;

	cout<<"data Y:"<<Y<<endl;
	p=&Y;
	cout<<"data p:"<<*(int *)p<<endl<<endl;
	cout<<"alamat X:"<<&Y<<endl;
	cout<<"alamat p:"<<p<<endl<<endl;

	cout<<"data Z:"<<Z<<endl;
	p=&Z;
	cout<<"alamat X:"<<&Z<<endl;
	cout<<"alamat p:"<<p<<endl<<endl;
}
