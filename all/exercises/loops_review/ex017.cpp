#include <iostream>
#include <locale>

using namespace std;

void Potencia (int A, int B){
	float pot = 1;
	int i;
	for (int i = 1; i <= B; i++){
		pot = pot * A;
	}
	cout<<"O resultado da base "<<A<<" elevado a "<<B<<" = "<<pot;
}

main (){
	float X, Y, resp;
	int cont;	
	
	
	cout<<"Digite a base: ";
	cin>>X;
	cout<<"Digite o espoente: ";
	cin>>Y;
	Potencia (X, Y);
}
