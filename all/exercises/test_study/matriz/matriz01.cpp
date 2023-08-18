#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int m[3][2];
	int l, c;
	
	for(l = 0; l < 3; l++){
		for(c = 0; c < 2; c++){
			cout<<"Enter a value ["<<l<<" "<<c<<"]: ";
			cin>>m[l][c];
		}
	}
	cout<<"\n";
	for(l = 0; l < 3; l++){
		for(c = 0; c < 2; c++){
			cout<<"\t"<<m[l][c];
		}
		cout<<"\n";
	}
}
