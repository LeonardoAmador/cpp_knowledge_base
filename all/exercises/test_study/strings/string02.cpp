#include <iostream>
#include <string.h>
using namespace std;

void concatenarStrings(char str1[], 
						char str2[], 
						char str3,
 						int t1){
 							
}

int main(){
	setlocale(LC_ALL, "Turkish");
	
	char test[] = {'a', 'b', 'c'};
	char test2[] = {'d', 'e', 'f'};
	char news[6];
	int i;
	
	concatenarStrings(test,3, test2,3, news);
	
	return 0;
}

void concatenarStrings(char str1[], 
						char str2[], 
						char str3[],
 						int t1){
	int i, j;
	for(i = 0; i < t1; i++){
		str3[i] = str1[i];
	}
	
	for(j = 0; j < t1; i++){
		str3[t1 + j] = str2[j];
	}
}
