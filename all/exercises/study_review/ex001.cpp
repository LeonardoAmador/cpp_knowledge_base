#include <iostream>

using namespace std;

int calcEven(int n){
    if(n % 2 == 0){
        return 0;
    }else{
        return 1;
    }
}

int main()
{
    int number[15];
    int even[15];
    int odd[15];
    int qeven = 0, qodd = 0;
    for(int i = 0; i < 15; i++){
        cout << "Digite o numero: ";
        cin >> number[i];
        
        if(calcEven(number[i]) == 0){
            even[i] = number[i];
            odd[i] = 0;
            qeven ++;
            
        }else{
            even[i] = 0;
            odd[i] = number[i];
            qodd ++;
        }
    }
    cout << "Pares:" << endl;
     for(int i = 0; i < 15; i++){
        if(even[i] != 0){
            cout << even[i] << endl;
        }
     }
     cout << "Impares:" << endl;
     for(int i = 0; i < 15; i++){
        if(odd[i] != 0){
            cout << odd[i] << endl;
        }
     }
    
    cout << "Pares: " << qeven << endl;
    cout << "Impares: " << qodd << endl;
    
    return 0;
}
