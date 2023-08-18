#include <iostream>
#include <conio.h>
using namespace std;


int main(){
	int vector[7], i, num;
	int totPar = 0, totImp = 0;
	
	
	for(i = 0; i < 7; i++){
		cout<<"Digite o primeiro valor: ";
		cin>>vector[i];
	}

	for(i = 0; i < 7; i++){
		if(vector[i]%2==0){
			totPar++;
			cout<<endl<<"Valor par na posicao: "<<i<<endl;
		}else{
			totImp++;
			cout<<endl<<"Valor impar na posicao: "<<i<<endl;
		}
	}
	cout<<"Total de pares foi: "<<totPar;
	cout<<"Total de impares foi: "<<totImp;
}
