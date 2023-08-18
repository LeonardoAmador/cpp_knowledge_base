#include <iostream>
#include <conio.h>
using namespace std;
		
int main(){
	int size;
	char option = 's';
	
	do{
		cout<<"Would you like insert an array [s/n]? ";
		cin>>option;
		cout<<"\n";
		option != 's' && option != 'n' ? (cout<<"     Enter a valid option \n     ") : (cout<<" ");
		cout<<"\n";
	}while(option != 's');
	
	while(option == 's'){
		cout<<"--------------------------------"<<endl;
		cout<<"      Enter array order: ";
		cin>>size;
		cout<<"--------------------------------"<<endl;
	
		int array[size][size];
		int line, column;
	
		for(line = 0; line < size; line++){
			for(column = 0; column < size; column++){
				array[line][column] = array[line] == array[column] ? array[line][column] = 1 : array[line][column] = 0;
			}
		}
		cout<<"\n\n";
	
		//Show array
		for(line = 0; line < size; line++){
			for(column = 0; column < size; column++){
				cout<<"\t"<<array[line][column]<<" ";	
			}
			cout<<"\n";
		}
		cout<<"\n";
		cout<<"--------------------------------"<<endl;
		cout<<"Would you like insert another array [s/n]? ";
		cin>>option;
		
		if(option == 's'){
			system("clear||cls");
		}else{
			system("clear||cls");
			cout<<"Thanks a lot for using our system ( :";
		}
	}
	
	return 0;
}

