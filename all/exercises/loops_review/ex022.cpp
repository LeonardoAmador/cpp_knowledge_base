#include <iostream>
#include <cstdlib>
#include <time.h>

int Rand_currency (){
	int Ca = 0;
	int cripto;
	int Co = 0;
	
	If (cripto == 1){
		Co += 1;
		return rand()%2;
	}else {
		Ca += 1
		return rand()%2;
	}
}

main (){
	int coin;
	srand(time(NULL));
	
	for (int cont = 1; cont <= 100, cont++){
		cout<<" "<<Rand_currency(coin);
	}
}
