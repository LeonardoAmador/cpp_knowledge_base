#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	
	string Arr_Name[4];
	float Arr_grade1[4], Arr_grade2[4], Arr_Media[4];
	float Plus_M, Tot_M;
	int i, tot = 0;
	
	for(i < 0; i < 4; i++){
		cout<<"Student "<<i<<endl;
		cout<<"Name: ";
		cin>>Arr_Name[i];
		cout<<"Fist grade: ";
		cin>>Arr_grade1[i];
		cout<<"Second grade: ";
		cin>>Arr_grade2[i];
		Arr_Media[i] = (Arr_grade1[i] + Arr_grade2[i])/2;
		Plus_M += Arr_Media[i];
	}
	Tot_M = Plus_M / 4;
	
	system("CLS");
	
	cout<<"Students List"<<endl;
	cout<<"-------------"<<endl;
	
	for(i = 0; i < 4; i++){
		cout<<Arr_Name[i]<<"---"<< Arr_Media[i]<<endl;
		if(Arr_Media[i] > 7){
			tot+=1;
		}
	}
	cout<<"We have " <<tot<< " students above average: "<<Tot_M;
	
	return 0;
}
