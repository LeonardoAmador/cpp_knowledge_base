#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
	string name;
	string Only_C[10];
	int i, tot = 0;
	
	for(i = 0; i < 10; i++){
		cout<<"Enter your name: ";
		cin>>name;
		if(Only_C[0] == 'C'){
			tot += 1;
			Only_C[tot] = name;
		}
	}
	
	for(i = 0; i < tot; i++){
		cout<<Only_C[i]<<endl;
	}
}
