#include <iostream>

using namespace std;

void text();
void soma(int a, int b);
int soma2(int a, int b);
void printVet(string vet[4]);

int main(){
	string vector[4] = {"carro", "moto", "barco", "aviao"};
	int result;
	
	printVet(vector);
	
	return 0;
}

void text(){
	cout<<"Im here";
}

void soma(int a, int b){
	cout<<"A soma entre X e Y = "<<a+b<<"\n";
}

int soma2(int a, int b){
	return a+b;
}

void printVet(string vet[4]){
	for(int i = 0; i < 4; i++){
		cout<<vet[i]<<"\n";
	}
}

