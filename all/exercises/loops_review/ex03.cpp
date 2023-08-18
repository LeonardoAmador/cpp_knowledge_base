#include <iostream>
#include <locale>
#include <locale.h>
#include <stdlib.h>
using namespace std;

main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, aposta, trying, gerado;
	char acertou;
	
	trying = 0;
	acertou = 'N';
	num = rand()% 100;
	aposta = -1;
	
	while (aposta != num){
		cout<<"Digite sua aposta: \n";
		cin>>aposta;
		trying = trying + 1;
		if (aposta == num){
			acertou = 'S';
		}else {
			if (aposta > num){
				cout<<"Errado - aposta alta!!!\n";
			}else {
				if (aposta < num) {
					cout<<"Errado - aposta baixa!!!\n";
				}
			}
		}
	}
	
	cout<<"Acertou em: "<<trying<<"\n";
}
