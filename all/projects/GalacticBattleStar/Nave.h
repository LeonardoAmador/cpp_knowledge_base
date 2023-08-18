#ifndef NAVE_H
#define NAVE_H

#include <string>

class Nave {
private:
    std::string nome;
    int atk;
    int def;
    int lvl;
    int lf;
    int pt;

public:
    Nave(std::string nome, int atk, int def, int lvl, int lf, int pt);
    void set_atk(int atk);
    void set_def(int def);
    void set_lvl(int lvl);
    void set_lf(int lf);
    void set_pt(int pt);
    std::string get_nome();
    int get_atk();
    int get_def();
    int get_lvl();
    int get_lf();
    int get_pt();
};

#endif 

