#include <iostream>
#include <locale.h>

using namespace std;

void read_value(int Arr[], int size) {
    for(int i = 0; i < size; i++){
        cout<<"Enter a number: ";
        cin>>Arr[i];
    }
}

void print_value(int Arr[], int size) {
    for(int i = 0; i < size; i++){
        cout<<"Value: "<<Arr[i]<<endl;
    }
}

void change_value(int Arr[], int size) {
    int aux;
    int end = Arr[4];
    int initial = Arr[0];
    int last = 0;
    int aux_s = 4;
    int first = 0;
    Arr[0] = end;
    Arr[4] = initial;
    for(int i = 1; i <= 3; i++){
        aux_s --;
        last = Arr[i];
        if(i == 1){
            last = Arr[3];
            Arr[3] = Arr[1];
            Arr[1] = last;
            cout << Arr[1];
        }else{
             last = Arr[aux_s];
             Arr[aux_s] = last;
        }
    }
}

void new_value(int Arr[], int size) {
    for(int i = 0; i < size; i++){
        cout<<"Arr: "<<Arr[i]<<endl;
    }
}

int main(){
    int Vector[5], size;

    read_value(Vector, 5);
    cout<<"----------------"<<endl;
    print_value(Vector, 5);
    change_value(Vector, 5);
    cout<<"----------------"<<endl;
    new_value(Vector, 5);
}
