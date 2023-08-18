#include <iostream>
#include <locale>
#include <locale.h>

using namespace std;

main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	char S;
	int id, Acima25, ttp, Men, F, time, cont;
	float peso, mediapeso, mediaId, totalpesoM, totalId;
	
	Acima25 = 0;
	ttp = 0;
	totalpesoM = 0;
	totalId = 0;
	Men = 0;
	F = 0;
	cont = 1;
	
	cout<<"Deseja fazer a leitura de quantas pessoas: ";
	cin>>time;
	
	while (cont <= time){
		cout<<"Informe a idade: \n";
		cin>>id;
		cout<<"Informe o peso: \n";
		cin>>peso;
		cout<<"Informe o sexo: [M / F] \n";
		cin>>S;
		
		if (S == 'M'){
			ttp = ttp + 1;
			Men = Men + 1;
			totalpesoM = totalpesoM + peso;
			mediapeso = (totalpesoM / Men);
		}
		if (S == 'F'){
			ttp = ttp + 1;
			F = F + 1;
			totalId = totalId + id;
			mediaId = (totalId / F);
		}
		if ((S == 'F') && (id > 25)){
			Acima25 = Acima25 + 1;
		}
		cont = cont + 1;	
	}
	
	
	cout<<"A media dos pesos dos homens = "<<mediapeso<<"\n";
	cout<<"A media da idade das mulheres = "<<mediaId<<"\n";
	cout<<"Mulheres acima de 25 anos = "<<Acima25<<"\n";
	cout<<"Total de pessoas = "<<ttp<<"\n";
}
