#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	
	int size ;
	cout<<"Informe o tamanho do vetor: ";
	cin>>size;
	
	int vector[size], i, j, aux;
	
	cout<<"\n";
	for(i = 0; i < size; i++){
		cout<<"Digite o "<<i<<"� valor: ";
		cin>>vector[i];
	}
	
	for(i = 0; i < size - 1; i++){
		for(j = i+1; j < size; j++){
			if(vector[i] > vector[j]){
				aux = vector[i];
				vector[i] = vector[j];
				vector[j] = aux;
			}
		}
	}
	
	cout<<"\n";
	for(i = 0; i < size; i++){
		cout<<"["<<vector[i]<<"]"<<"\t";
	}
	
	
	return 0;
}
