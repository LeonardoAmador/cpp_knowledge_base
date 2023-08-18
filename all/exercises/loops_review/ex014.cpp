#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

main (){
	int n1, n2, n3, t;
	cout<<"Quantas vezes deseja executar? ";
	cin>>t;
	n1 = 0;
	cout<<n1<<endl;
	n2 = 1;
	cout<<n2<<endl;
	
	for(int cont = 3; cont <= t; cont++){
		n3 = n1 + n2;
		cout<<n3<<endl;
		n1 = n2;
		n2 = n3;
	}
}

