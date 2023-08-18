#include <iostream>
#include <locale>

using namespace std;

main (){
	char opc;
	int tab;
	cout<<"Deseja calcular uma tabuada s/n? ";
	cin>>opc;	
	while(opc == 's'){
		do{
			cout<<"\n Informe a tabuada desejada: ";
			cin>>tab;//leitura da tabuada que o usuário deseja
			if (tab <0 or tab > 100)
				cout<<"\n\n Tabuada fora do limete digite um numero entre 0 e 100: ";
		} while (tab < 0 or tab >100);
			
			for (int i=0; i<=10; i++){
				cout<<tab<<"X"<<i<<" = "<<tab*i<<endl;
			}
		do{
			cout<<"Deseja calcular outra tabuada s/n: ";
			cin>>opc;
		} while ((opc != 's') && (opc != 'n'));
	
		return 0;
	}
system("pause");
}
