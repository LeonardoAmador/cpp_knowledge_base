#include <iostream>
#include <conio.h>
using namespace std;

int Check(int num){
	if(num%2==0){
		return 0;
	}else{
		return 1;
	}
}

int main(){
	setlocale(LC_ALL, "Turkish"); // Library that allows using special characters
	int N, i, ieven=0, iodd=0, num;
	
	cout<<"Enter the Vector size: ";
	cin>>N;
	int even[N], odd[N];
	
	for(i=0; i < N; i++){
		cout<<"Enter the " <<i<< "� number: ";
		cin>>num;
		
		if(Check(num)==0){
			even[ieven]=num;
			ieven++;	
		}else{
			odd[iodd]=num;
			iodd++;
		}
	}
	
	//Array even
	cout<<"Even Vector"<<endl;
	for(i = 0; i < ieven; i++){
		cout<<even[i]<<" ";
	}
	cout<<"\n \n";
	
	//Array odd
	cout<<"Odd Vector"<<endl;
	for(i = 0; i < iodd; i++){
		cout<<odd[i]<<" ";
	}
	cout<<"\n \n";
	
	return 0;
}
