#include <iostream>
#include <locale>
#include <locale.h>

using namespace std;

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, qtd30, qtdpar, qtdimp, qtdneg;
	
	qtd30 = 0;
	qtdpar = 0;
	qtdimp = 0;
	qtdneg = 0;
	
	cout<<"Informe um numero : ";
	cin>>num;
	while (num != 0){
		if(num > 30){
			qtd30 = qtd30 + 1;
		}
		if (num % 2 == 0){
			qtdpar = qtdpar + 1;
		}else {
			qtdimp = qtdimp + 1;
		}
		if (num < 0){
			qtdneg = qtdneg + 1;
		}
		
		cout<<"Informe um n�mero: ";
		cin>>num;
	}
	
	cout<<"Quantidade de n�meros maiores que 30 = "<<qtd30<<"\n";
	cout<<"Quantidade de n�meros pares = "<<qtdpar<<"\n";
	cout<<"Quantidade de n�meros impares = "<<qtdimp<<"\n";
	cout<<"Quantidade de n�meros negativos = "<<qtdneg<<"\n";
}
