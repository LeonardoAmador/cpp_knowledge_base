#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int vector[6], i;
	
	for(i = 1; i < 6; i++){
		cout<<"Digite o "<<i<<"º valor: ";
		cin>>vector[i];
	}
	for(i = 1; i  < 6; i++){
		cout<<"\n";
		cout<<"\t"<<vector[i];
	}
}
