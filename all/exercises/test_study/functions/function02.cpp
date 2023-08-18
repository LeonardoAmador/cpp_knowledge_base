#include <iostream>
using namespace std;

void soma();
void soma(int n1, int n2);

int main(){
	int x=10, y=12;
	
	soma();
	soma(x, y);
	
	return 0;
}

void soma(int n1, int n2){
	cout<<"A soma = "<<n1+n2;
}

void soma(){
	int n1 = 10, n2 = 20;
	cout<<"A soma =  "<<n1 + n2<<"\n";
}
