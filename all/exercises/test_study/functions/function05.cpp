#include <iostream>
using namespace std;

int fatorial(int num);
int fibonacci(int num);

int main(){
	
	int value, result;
	cout<<"Inform a number: ";
	cin>>value;
	
	result = fatorial(value);
	cout<<"Fatorial de "<<value<< ": "<<result;
	
	cout<<"Fibonnaci com "<<value<<" valores: ";
	for(int i = 0; i < value; i++){
		cout<<fibonacci(i+1)<<" ";
	}
	
	cout<<"\n \n";
	
	return 0;
}

//ex: 10 = 10*9*8*7*6*5*4*3*2*1
int fatorial(int num){
	if(num==0){
		return 1;
	}else{
		return num*fatorial(num-1);
	}
}

int fibonacci(int num){
	if(num==1 || num==2){
		return 1;
	}else{
		return fibonacci(num-1)+fibonacci(num-2);
	}
}
