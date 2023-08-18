#include <iostream>
#include <locale.h>

using namespace std;

int primos(int v[15]){
	int i, con;
	
	for (i=0; i<15; i++){
		if (v[i] % 2 == 0){
			con++;
		}
	}
	if(con == 2){
		return v[i];
	}
	if (con > 2){
		return 0;
	}
}

int main(){
	int k[15], i, p[15];
	
	for(i=0; i < 15; i++){
		cout<<"Digite 15 valores: ";
		cin>>k[i];		
		p[i, 15] = primos(k);
		if (p!=0){
			cout<<p;
		}else{
			cout<<"0";
		}
	}
	cout<<"\n\n";

	return 0;
}
