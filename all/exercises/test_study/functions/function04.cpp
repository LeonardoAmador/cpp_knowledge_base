#include <iostream>
using namespace std;

void count(int num, int i=0);

int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	
	count(n);
	
	return 0;	
}

void count(int num, int i){    //Usando recursividade;
	cout<<i<<"\n";
	if(num > i){
		count(num, ++i); 
	}
}


