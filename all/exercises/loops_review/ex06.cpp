#include <iostream>
#include <locale>
#include <locale.h>

using namespace std;

main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, maior, menor, soma, cont, time;
	
	maior = 0;
	menor = 0;
	cont = 1;
	
	cout<<"Quantas somas deseja fazer? ";
	cin>>time;
	
	while(cont <= time){
			cout<<"Digite um n�mero: ";
			cin>>num;
			if(cont == 1) {
				maior = num;
				menor = num;
			}
			if(num < menor){
				menor = num;
			}else{
				if(num > maior){
					maior = num;
				}else{
					if(num < 0){
						cout<<"N�mero inv�lido!! Digite outro.\n\n";
					}
				}
			}
		soma = soma + num;
		cont = cont + 1;
	}
		
	cout<<"Maior n�mero = "<<maior<<"\n";
	cout<<"Menor n�mero = "<<menor<<"\n";
	cout<<"Soma dos n�meros = "<<soma<<"\n";
}
