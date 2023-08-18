#include <iostream>
using namespace std;

void text(string txt="The argument is omitted");

int main(){
	string txt;
	cout<<"Enter a string to be printed bellow: ";
	cin>>txt;
	
	text(txt);
	
	
	return 0;
}

void text(string txt){
	cout<<"\n"<<txt<<"\n";
}
