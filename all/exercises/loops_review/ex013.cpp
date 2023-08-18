#include <iostream>
#include <locale>

using namespace std;

main (){
	int client_code, product_code, product_qtd;
	float un_value, total_value;
	cout<<"Informe o codigo do cliente: ";
	cin>>client_code;
	
	while (client_code != 0){
		do{
			cout<<"Informe o codigo do produto: "<<endl;
			cin>>product_code;
			if (product_code != -1){
				cout<<"Informe a quantidade: ";
				cin>>product_qtd;
				cout<<"Informe o valor unitario: "<<endl;
				cin>>un_value;
				total_value = (product_qtd * un_value);
			}else{
				cout<<"COMPRA EFETUADA COM SUCESSO!"<<endl;
			}
		}while(product_code != -1);
		
		cout<<"Valor total da compra do cliente **"<<client_code<< "** R$: " <<total_value<<endl;
		
		cout<<"Informe o codigo do cliente: "<<endl;
		cin>>client_code;
		if (client_code == 0){
			cout<<"MUITO OBRIGADO POR SUA COMPRA!!"<<endl;
		}
	}
	return 0;
}
