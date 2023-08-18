#include <iostream>
#include <locale>

using namespace std;

	void ParOuImpar (int X){
		if (X % 2 == 0)
			cout<<"Numero Par";
		else
			cout<<"Numero impar";
	}
	
main (){
	int N;
	char opc = 'S';
	
	cout<<"Deseja saber se o numero e impar ou par? "<<endl;
	cin>>opc;
	
	while (opc == 'S'){
		cout<<"Informe um numero: "<<endl;
		cin>>N;
		ParOuImpar(N);
		cout<<"Deseja ler outro numero:[S/N]"<<endl;
		cin>>opc;
	}
	
}
