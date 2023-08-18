#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int size;
	cout<<"Enter a matriz size: ";
	cin>>size;
	
	int m[size][size];
	int l, c, totPar=0;
	
	for(l = 0; l < size; l++){
		for(c = 0; c < size; c++){
			cout<<"Enter a value ["<<l<<" "<<c<<"]: ";
			cin>>m[l][c];
		}
	}
	cout<<"\n";
	for(l = 0; l < size; l++){
		for(c = 0; c < size; c++){
			if(m[l][c]%2==0){
				cout<<"["<<m[l][c]<<"]"<<"\t";
				totPar++;
			}else{
				cout<<" "<<m[l][c]<<"\t";
			}
		}
		cout<<"\n";
	}
	cout<<"\n";
	
	cout<<"Total de numeros pares: "<<totPar;
} 
