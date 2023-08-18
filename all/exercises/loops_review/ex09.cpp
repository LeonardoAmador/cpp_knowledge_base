#include <iostream>
#include <locale>
#include <locale.h>

using namespace std;

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int number;
	char opc;
	
	cout<<"Deseja efetuar uma tabuada? ";
	cin>>opc;
	
	while (opc=='s'){
		cout<<"Informe a tabuada desejada: ";
		cin>>number;
		for(int i=0; i<=10; i++){
			cout<< number <<" x "<<i<<" = "<<number*i<<endl;
		}
		cout<<"Deseja continuar: ";
		cin>>opc;
	}
	return 0;
	
system("pause");
}
