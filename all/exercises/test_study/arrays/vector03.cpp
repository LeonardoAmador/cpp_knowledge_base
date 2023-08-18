#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
	int qtd_a;
	cout<<"Informe a quantidade de alunos que deseja ler: ";
	cin>>qtd_a;
	
	string arr_name[qtd_a];
	float arr_nota1[qtd_a], arr_nota2[qtd_a], arr_media[qtd_a];
	float soma_media,  media_total;
	int i, tot_acima;
	
	for(i = 0; i < qtd_a; i++){
		cout<<"Aluno "<<i<<endl;
		cout<<"Nome: "<<endl;
		cin>>arr_name[i];
		cout<<"Nota 1: "<<endl;
		cin>>arr_nota1[i];
		cout<<"Nota 2: "<<endl;
		cin>>arr_nota2[i];
		arr_media[i] = (arr_nota1[i] + arr_nota2[i]) / 2;
		soma_media += arr_media[i];
	}
	media_total = soma_media / qtd_a;
	system("clear||cls");
	cout<<"LISTAGEM DE ALUNOS"<<endl;
	cout<<"------------------"<<endl;
	for(i = 0; i < qtd_a; i++){
		cout<<arr_name[i]<<endl;
		cout<<arr_media[i]<<endl;
		cout<<"---------"<<endl;
		if(arr_media[i] > media_total){
			tot_acima++;
		}
	}
	cout<<"Ao todo temos "<<tot_acima<< " alunos acima da media da turma"<<endl;
	
	return 0;
}
