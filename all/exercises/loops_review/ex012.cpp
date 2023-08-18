#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

main (){
	
	float M, A, IMC;
	
	cout<<"Informe seu peso(kg):";
	cin>>M;
	cout<<"Informe sua altura(M): ";
	cin>>A;
	
	IMC = M / (A * A);
	cout<<"IMC: "<<IMC<<endl;
	
	if (IMC < 17){
		cout<<"Muito abaixo do peso";
	}else if (IMC >= 17 && IMC <= 18.5){
			cout<<"Abaixo do Peso";
	}else if (IMC >= 18.5 && IMC < 25){
				cout<<"Peso ideal";
	}else if (IMC >= 25 && IMC < 30){
					cout<<"Sobre peso";
	}else if (IMC >= 30 && IMC < 35){
						cout<<"Obesidade";
	}else{
		cout<<"Obesidade morbida";
	}
}
