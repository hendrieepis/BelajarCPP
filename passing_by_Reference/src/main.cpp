//============================================================================
// Name        : passing_by_value.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int X,Y;

void update(int X,int &Y){
 cout <<"nilai X dalam fungsi: "<<X<<endl;
 cout <<"nilai Y dalam fungsi: "<<Y<<endl<<endl;
 X=10;
 Y=11;
 cout <<"update nilai X dalam fungsi: "<<X<<endl;
 cout <<"update nilai Y dalam fungsi: "<<Y<<endl<<endl;
}

int main() {
    cout <<"**** passing by parameter"<<endl;
	X=1;Y=2;
    cout <<"nilai X awal"<<X<<endl;
    cout <<"nilai Y awal"<<Y<<endl<<endl;
    update(X,Y);
    cout <<"nilai X akhir: "<<X<<endl;
    cout <<"nilai Y akhir: "<<Y<<endl<<endl;
	return 0;
}
