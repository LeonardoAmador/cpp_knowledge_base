#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int size;
	cout<<"Enter a matriz size: ";
	cin>>size;
	
	int m[size][size];
	int l, c;
	
	for(l = 0; l < size;  l++){
		for(c = 0; c < size; c++){
			if(m[l][l] == m[c][c]){
				m[l][c] = 1;
			}else {
				m[l][c] = 0;
			}
		}
	}
	cout<<"\n";
	for(l = 0; l < size; l++){
		for(c = 0; c < size; c++){
			cout<<"\t"<<m[l][c]<<"\t";
		}
		cout<<"\n";
	}
}
