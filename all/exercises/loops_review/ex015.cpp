#include <iostream>
#include <locale>

using namespace std;

void maior(int n1, int n2){
	if (n1 > n2)
		cout<<"\n O maior = "<<n1;
	else
		cout<<"\n O maior = "<<n2;
}

main(){
	int A, B;
	cout<<"Informe um numero: ";
	cin>>A;
	cout<<"Informe outro numero: ";
	cin>>B;
	maior(A, B);
}

