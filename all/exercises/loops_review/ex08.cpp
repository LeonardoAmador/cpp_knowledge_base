#include <iostream>
#include <locale>
#include <locale.h>

using namespace std;

main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade, maiorid, menorid, contF, contf300, contM, contH, cont, time;
	char sexo;
	float salary, salarytt, mediasal, percen;
	
	salarytt = 0;
	maiorid = idade;
	menorid = 1000000;
	contF = 0;
	contf300 = 0;
	contM = 0;
	contH = 0;
	cont = 1;
	
	cout<<"Informe quantas pessoas deseja cadastrar: ";
	cin>>time;
	
	while (cont <= time){
		cout<<"Informe a idade: \n";
		cin>>idade;
		cout<<"Informe o sexo: [M / F]";
		cin>>sexo;
		cout<<"Informe o salário: \n";
		cin>>salary;
		salarytt = salarytt + salary;
		
		if(idade > maiorid){
			maiorid = idade;
		}
		if(idade < menorid){
			menorid = idade;
		}
		if(sexo == 'F'){
			contF + contF + 1;
		}else {
			if(salary <= 300.00){
				contf300 = contf300 + 1;
			}
		}
		if(sexo == 'M'){
			contM = contM + 1;
		}
		contH = contH + 1;
		cont = cont + 1;
	};
	
	mediasal = salarytt / contH;
	percen = contf300 - (contf300 * 100)/contF;
	
	cout<<"A media dos salarios = "<<mediasal<<"\n";
	cout<<"Menor idade = "<<menorid<<"\n";
	cout<<"Maior idade = "<<maiorid<<"\n";
	cout<<"Percentual de mulheres com salario ate 300.00 = "<<percen<<"% das mulheres \n";
	cout<<"Quantidade de homens: "<<contM<<"\n";
}
