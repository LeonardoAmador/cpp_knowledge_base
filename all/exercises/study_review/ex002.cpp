#include <iostream>
#include <locale>

using namespace std;

void read_value(int Arr[], int size){
	for (int i = 0; i < size; i++) {
		cout<<"Value: ";
		cin>>Arr[i];
	}
}

int even (int Arr[], int size){
	int Qtd_par = 0;
	for(int i = 0; i < size; i++){
		if (Arr[i] % 2 == 0){
			Qtd_par++;
		}
	}
	return Qtd_par;
}

void show_value(int Arr[], int size) {
	for(int i = 0; i < size; i++){
		cout<<"Valores apresentados: "<<Arr[i]<<endl; 
	}
}

int main(){
	int Vector[20]; int result;
	read_value(Vector, 20);
	show_value(Vector, 20);
	result = even(Vector, 20);
	cout<<"A quantidade de numeros pares no vetor: "<<result;
}
