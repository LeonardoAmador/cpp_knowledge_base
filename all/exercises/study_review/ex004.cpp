#include <iostream>

using namespace std;

int main()
{
    char g[10] = {'a','d','a','e','e','a','a','b','b','a'};
    
    int students[50];
    
    char answer; 
    
    int points = 0; 
    
    for(int i = 0; i < 50; i++){
        for(int quantity = 0; quantity < 10; quantity ++){
            cout << "Aluno: "<< i + 1 << "Digite sua resposta da questao " << quantity + 1 << ": "; 
            cin >> answer;
            
            if(answer == g[quantity]){
                    points ++;
                }
                cout << answer << endl;
        }
        
        if(points > 6){
            cout << "Aprovado! " << points << "acertos" << endl;
        }else{
           cout << "Reprovado! " << points << "acertos" << endl; 
        }
        
        points = 0;
    }
    
    return 0;
}
