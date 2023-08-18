#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish"); // Library that allows using special characters
	int size;
	
	cout<<"Enter array order: ";
	cin>>size;
	
	int game[size][size];
	int l, c, tot, sum = 0, failed = 0;
	
	cout<<"Enter the Array value: \n";
	for(l = 0; l < size; l++){
		for(c = 0; c < size; c++){
			cout<<"Value: ";
			cin>>game[l][c];
		}
	}
	
	//Main diagonal / accumulate the sum
	for(l = 0; l < size; l++){
		sum+=game[l][l];
		cout<<"\n";
	}
	cout<<"Main diagonal: "<<sum<<endl;
	tot = sum;
	sum = 0;
	
	//Secondary diagonal
	for(l = 0; l < size; l++){
		sum += game[l][size - 1 - l]; //Array size - 1 - our index
		cout<<"\n";
	}
	cout<<"Secondary diagonal: "<<sum<<endl;
	cout<<"\n";
	if(tot != sum){
		cout<<"Different secondary diagonal"<<endl;
		failed = 1;
	}

	for(l = 0; l < size; l++){
		sum = 0;
		for(c = 0; c < size; c++){
			sum += game[l][c];
		}
		cout<<"Line "<<l<< ": "<<sum<<endl;
		
		if(tot != sum){
			cout<<"The line "<<l<< " is different!"<<endl;
			failed = 1;
		}
	}
	
	for(c = 0; c < size; c++){
		sum = 0;
		for(l = 0; l < size; l++){
			sum += game[l][c];
		}
		cout<<"Column "<<c<< ": "<<sum<<endl;
		
		if(tot != sum){
			cout<<"The column "<<c<< " is different!"<<endl;
			failed = 1;
		}
	}
	cout<<"\n\n";
	
	if (failed == 1){
		cout<<"\n It's not a Rubik's Cube \n";
	}else{
		cout<<"\n It is a Rubik's Cube \n";
	}
	
	for(l = 0; l < size; l++){
		for(c = 0; c < size; c++){
			cout<<"\t"<<game[l][c]<<" ";
		}
		cout<<"\n";
	}

	return 0;
}

