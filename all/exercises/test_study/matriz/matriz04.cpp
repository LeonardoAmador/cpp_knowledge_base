#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int size;
	cout<<"Enter a matriz size: ";
	cin>>size;
	
	float m[size][size], mediaValue, sM=0;
	int l, c, sDP=0, p2L=1, Maior3c, AcimaMedia4l;
	
	for(l = 0; l < size; l++){
		for(c = 0; c < size; c++){
			cout<<"Enter a value ["<<l<<" "<<c<<"]: ";
			cin>>m[l][c];
			if(l==c){
				sDP += m[l][c];
			}
			sM += m[l][c];
			mediaValue = (sM /m[l][c]);
		}
	}
	cout<<"\n";
	for(l = 0; l < size; l++){
		for(c = 0; c < size; c++){
			l == c ? (cout<<"["<<m[l][c]<<"]"<<"\t") : (cout<<" "<<m[l][c]<<"\t");
		}
		cout<<"\n";
	}
	cout<<"\n";
	for(c = 0; c < size; c++){
		p2L*=m[1][c];
	}
	cout<<"\n";
	for(l = 0; l < size; l++){
		if(m[l][2] > Maior3c){
			Maior3c = m[l][2];
		}
	} 
	cout<<"\n";
	for(c = 0; c < size; c++){
		if(m[3][c] > mediaValue){
			AcimaMedia4l = m[3][c];
		}
	}
	cout<<"\n";
	cout<<"A soma dos valores da diagonal principal: "<<sDP<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"O produto dos valores da segunda linha: "<<p2L<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"O maior valor da terceira coluna: "<<Maior3c<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"A media dos numeros inseridos: "<<mediaValue<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"Valor acima da media da quarta linha: "<<AcimaMedia4l;
}
