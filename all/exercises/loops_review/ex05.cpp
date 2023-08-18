#include <iostream>
#include <locale>
#include <locale.h>

using namespace std;

main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	float altura, maioralt, menoralt, mediAltF, ttalt;
	int Homens, Mulheres, cont, time;
	char sexo;
	
	maioralt = 0;
	menoralt = 0;
	Homens = 0;
	Mulheres = 0;
	cont = 1;
	
	cout<<"Quantas pessoas deseja ler: ";
	cin>>time;
	
	while (cont <= time){
			cout<<"Informe o sexo:[M OU F]";
			cin>>sexo;
			cout<<"Informe a altura: ";
			cin>>altura;
			if (cont == 1){
				maioralt = altura;
				menoralt = altura;
			}
			if (altura > maioralt){
				maioralt = altura;
			}else{
				if (altura < menoralt){
					menoralt = altura;
				}
			}
			if (sexo == 'F'){
				Mulheres = Mulheres + 1;
				ttalt = ttalt + altura;
				mediAltF = (ttalt / Mulheres);
			}
			if (sexo == 'M'){
				Homens = Homens + 1;
			}
		cont++;
	}
	
	cout<<"A maior altura = "<<maioralt<<"\n";
	cout<<"A menor altura = "<<menoralt<<"\n";
	cout<<"A média de altura entre as mulheres = "<<mediAltF<<"\n";
	cout<<"Número de homens = "<<Homens<<"\n";
	
	
}
