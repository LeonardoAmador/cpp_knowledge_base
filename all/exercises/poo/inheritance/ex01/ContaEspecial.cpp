class ContaEspecial : public Conta {
private:
    float limite_credito;
    
public:
    ContaEspecial(string nome, int numero, float saldo, float limite_credito)
        : Conta(nome, numero, saldo) {
        this->limite_credito = limite_credito;
    }
    
    bool retirar(float valor) {
        if (saldo + limite_credito >= valor) {
            saldo -= valor;
            return true;
        } else {
            return false;
        }
    }
};

