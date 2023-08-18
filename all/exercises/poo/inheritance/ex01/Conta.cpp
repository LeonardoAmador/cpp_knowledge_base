#include <iostream>
using namespace std;

class Conta {
private:
    string nome;
    int numero;
    float saldo;
    
public:
    Conta(string nome, int numero, float saldo) {
        this->nome = nome;
        this->numero = numero;
        this->saldo = saldo;
    }
    
    void depositar(float valor) {
        saldo += valor;
    }
    
    bool retirar(float valor) {
        if (saldo >= valor) {
            saldo -= valor;
            return true;
        } else {
            return false;
        }
    }
    
    float consulta_saldo() {
        return saldo;
    }
};

