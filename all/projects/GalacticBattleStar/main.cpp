#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cstdlib>
#include "Nave.h"

using namespace std;

void realizarBatalha(Nave &nave1, Nave &nave2) {
    int dano = nave1.get_atk() - nave2.get_def();
    if (dano < 0) {
        dano = 0;
    }
    nave2.set_lf(nave2.get_lf() - dano);
    if (nave2.get_lf() <= 0) {
        cout << "\033[1m" << nave1.get_nome() << " venceu a batalha contra " << nave2.get_nome() << "!\033[0m\n";
        nave1.set_lvl(nave1.get_lvl() + 1);
        nave1.set_pt(nave1.get_pt() + 5);
        return;
    }
    dano = nave2.get_atk() - nave1.get_def();
    if (dano < 0) {
        dano = 0;
    }
    int vidaRestante = nave1.get_lf() - dano;
    nave1.set_lf(vidaRestante);
    cout << "A nave " << nave1.get_nome() << " perdeu " << dano << " pontos de vida." << endl;
    if (vidaRestante <= 0) {
        cout << "A nave " << nave1.get_nome() << " foi destruída!" << endl;
        exit(1);
    }
}

void realizarBatalha(Nave &nave1, Nave &nave2);

int main() {
    srand(time(NULL));
   
    vector<Nave> naves;
    naves.push_back(Nave("Delta", 10, 1, 1, 100, 0));
    naves.push_back(Nave("Prisma", 100, 5, 1, 100, 0));
    naves.push_back(Nave("Mundo", 10, 10, 5, 100, 0));
    naves.push_back(Nave("Universo", 10, 10, 1, 100, 0));

    int num_batalhas = 10;
    int batalhas_realizadas = 0;
    int num_naves = naves.size();

    while (batalhas_realizadas < num_batalhas) {
        cout << "Escolha a nave para a batalha #" << batalhas_realizadas + 1 << ":" << endl;
        for (int i = 0; i < naves.size(); i++) {
            cout << i + 1 << " - " << naves[i].get_nome() << endl;
        }
        int escolha;
        cin >> escolha;
        while (escolha < 1 || escolha > naves.size()) {
            cout << "Opção inválida. Escolha novamente: ";
            cin >> escolha;
        }
        int nave1_index = escolha - 1;

        escolha = rand() % naves.size();
        while (escolha == nave1_index) {
            escolha = rand() % naves.size();
        }
        int nave2_index = escolha;

        realizarBatalha(naves[nave1_index], naves[nave2_index]);
        
		cout << "\nVida restante das naves:\n";
	    for (int i = 0; i < naves.size(); i++) {
    		cout << naves[i].get_nome() << ": " << naves[i].get_lf() << endl;
		}
    	batalhas_realizadas++;
	}
	
	Nave nave_vencedora = naves[0];
	for (int i = 1; i < num_naves; i++) {
	    if (naves[i].get_lf() > nave_vencedora.get_lf()) {
	        nave_vencedora = naves[i];
	    }
	}
	
	cout << "\nA nave " << nave_vencedora.get_nome() << " venceu a batalha final!\n";
	
	return 0;
}


