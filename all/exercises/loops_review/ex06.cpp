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
			cout<<"Digite um número: ";
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
						cout<<"Número inválido!! Digite outro.\n\n";
					}
				}
			}
		soma = soma + num;
		cont = cont + 1;
	}
		
	cout<<"Maior número = "<<maior<<"\n";
	cout<<"Menor número = "<<menor<<"\n";
	cout<<"Soma dos números = "<<soma<<"\n";
}
