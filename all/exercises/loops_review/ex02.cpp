#include <iostream>
#include <locale>
#include <locale.h>

using namespace std;

main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade, maior14, tota14;
	float totalcaixa;
	char opc;
	
	tota14 = 0;
	maior14 = 0;
	totalcaixa = 0;
	opc = 'S';
	
	while (opc == 'S'){
		cout<<"Informe a idade: ";
		cin>>idade;
		if (idade < 14){
			tota14 = tota14 + 1;
			totalcaixa = totalcaixa + 5.00;
		}else {
			maior14++;
			totalcaixa = totalcaixa + 8.00;
		}
		
		cout<<"Deseja continuar? [S / N] ";
		cin>>opc;
	}
	
	cout<<"Ingressos menor de 14 anos = "<<tota14<<"\n";
	cout<<"Ingressos maior de 14 anos = "<<maior14<<"\n";
	cout<<"Valor em caixa = "<<totalcaixa<<"\n";
}
