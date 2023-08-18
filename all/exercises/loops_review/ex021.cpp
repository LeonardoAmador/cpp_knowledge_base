#include <iostream>
#include <locale>

using namespace std;

float pot (float x, float y){
	float r = 1;
	for(int i = 1; i <= y; i++){
		r = r * x;
	}
	return r;
}

main (){
	float a, b, result;
	cout<<"Informe a base: ";
	cin>>a;
	cout<<"Informe o expoente: ";
	cin>>b;
	result = pot (a, b);
	cout<<"O resultado = "<<result;
}


