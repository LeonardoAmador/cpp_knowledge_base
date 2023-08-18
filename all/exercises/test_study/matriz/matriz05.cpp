#include <iostream>
#include <conio.h>
using namespace std;

void Menu();

int main(){
	setlocale(LC_ALL, "Turkish");
	
	int size;
	cout<<"Enter the array size: ";
	cin>>size;
	
	int arr[size][size];
	int l, c, option;

	for(l = 0; l < size; l++){
		for(c = 0; c < size; c++){
			cout<<"Enter a value ["<<l<<" "<<c<<"]: ";
			cin>>arr[l][c];
		}
	}
	system("clear||cls");
	
	Menu();
	cin>>option;
	cout<<"\n";
	
	while(option != 5){
		switch(option){
			case 1: 
				for(l = 0; l < size; l++){
					for(c = 0; c < size; c++){
						cout<<arr[l][c]<<"\t";
					}
					cout<<"\n";
				}
				break;
			case 2: 
				for(l = 0; l < size; l++){
					for(c = 0; c < size; c++){
						l == c ? (cout<<"["<<arr[l][c]<<"]"<<"\t") : (cout<<" "<<" "" "<<"\t");
					}
					cout<<"\n";
				}
				break;
			case 3: 
				for(l = 0; l < size; l++){
					for(c = 0; c < size; c++){
						if((l < c) && (arr[l][c]) != 0){
							cout<<"["<<arr[l][c]<<"]"<<" ";
						}else {
							cout<<" "<<" "" "<<" ";
						}
					}
					cout<<"\n";
				}
				break;
			case 4: 
				for(l = 0; l < size; l++){
					for(c = 0; c < size; c++){
						if((l > c) && (arr[l][c]) != 0){
							cout<<"["<<arr[l][c]<<"]"<<" ";
						}else {
							cout<<" "<<" "" "<<" ";
						}
					}
					cout<<"\n";
				}
				break;
			default:
				system("clear||cls");
				cout<<"==ENTER A VALID OPTION=="<<endl;
				cout<<"\n";
				Menu();
				cin>>option;
				cout<<"\n";
				break;
		}
		cout<<"\n";
		cout<<"Would you like do it again [1-Yes / 2-No]: "<<endl;
		cin>>option;
		system("clear||cls");
		if(option != 2){
			cout<<"\n";
			Menu();
			cin>>option;
			cout<<"\n";
		}else{
			cout<<"Thanks ( : "<<endl;
			option = 5;
		}
	}
	
	return 0;
}


void Menu(){
	cout<<"OPTION MENU"<<endl;
	cout<<"============"<<endl;
	cout<<"\n";
	cout<<"[1] Show the Array"<<endl;
	cout<<"[2] Main diagonal"<<endl;
	cout<<"[3] Upper triangle"<<endl;
	cout<<"[4] Lower triangle"<<endl;
	cout<<"[5] Exit"<<endl;
	cout<<"\n";
	cout<<"=== OPTION ===: ";
}
