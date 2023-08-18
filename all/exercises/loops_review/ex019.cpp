#include <iostream>
#include <locale>

using namespace std;

void Potencia (float b, float e){
	 int i;
	 float pot=1;
	 for (i = 1; i <= e; i++){
	 	pot = pot * b;
	 }
	 cout<<"A Potencia de = "<<pot<<endl;
}

main (){
	
	float base, expo, response;
	
	cout<<"Informe a base da Potencia: ";
	cin>>base;
	cout<<"Informe o expoente: ";
	cin>>expo;
	Potencia (base, expo);
	
}
