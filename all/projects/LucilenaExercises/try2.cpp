#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	
	int vector[7];
	int i, totEven = 0;
	
	for(i = 0; i < 7; i++){
		cout<<"Enter the "<<i<<"º value: ";
		cin>>vector[i];
	}
	
	for(i = 0; i < 7; i++){
		if(vector[i]%2==0){
			totEven += 1;
			cout<<"Even value in position "<<i<<endl;
		}
	}
	
	cout<<"Even Numbers: "<<totEven<<endl;
}
