#include <iostream>
#include <locale>

using namespace std;

void Equacao (float v1, float v2, float v3){
	float D;
	D = (v2*v2- 4 * v1 * v3);
	cout<<"O valor de Delta = "<<D;
}

main (){
	float A, B, C;
	float Delta;
	
	cout<<"Informe o primeiro valor: ";
	cin>>A;
	cout<<"Informe o segundo valor: ";
	cin>>B;
	cout<<"Informe o terceiro valor: ";
	cin>>C;
	Equacao (A, B, C);
}
