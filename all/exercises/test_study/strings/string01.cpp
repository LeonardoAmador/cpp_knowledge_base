#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	
	char names[5][25];
	int l;
	
	for(l = 0; l < 5; l++){
		cout<<"Enter the "<<l<<"º name: ";
		gets(names[l]);
	}
	cout<<"\n";
	
	cout<<"The names added: ";
	for(l = 0; l < 5; l++){
		cout<<"\n"<<names[l];
	}
	
	
	return 0;
}
