#include <iostream>
#include <locale>

using namespace std;

int SomaInt (int v1, int v2){
	int i;
	int s = 0;
	for (i = v1; i <= v2; i++){
		s += i;
	}
	return s;
}

main (){
		int n1, n2, result;
		cout<<"Informe o primeiro valor: ";
		cin>>n1;
		cout<<"Informe o segundo valor: ";
		cin>>n2;
		result = SomaInt(n1, n2);
		cout<<"A soma entre os valores do meio de "<<n1<<" e "<<n2<< " = "<<result;
	}
