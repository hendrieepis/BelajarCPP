//============================================================================
// Name        : pointertoFunction.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int (*p) (int,int);
int tambah(int a,int b){
   return a+b;
};


int main() {
	p= tambah;
	cout << "hasil dari fungsi tambah : " << tambah(2,3)<<endl; // prints !!!Hello World!!!
	cout << "hasil dari fungsi tambah dengan pointer : " << (*p)(2,3) <<endl;
	return 0;
}
