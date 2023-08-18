#include "Nave.h"

Nave::Nave(std::string nome, int atk, int def, int lvl, int lf, int pt) {
    this->nome = nome;
    this->atk = atk;
    this->def = def;
    this->lvl = lvl;
    this->lf = lf;
    this->pt = pt;
}

void Nave::set_atk(int atk) {
    this->atk = atk;
}

void Nave::set_def(int def) {
    this->def = def;
}

void Nave::set_lvl(int lvl) {
    this->lvl = lvl;
}

void Nave::set_lf(int lf) {
    this->lf = lf;
}

void Nave::set_pt(int pt) {
    this->pt = pt;
}

std::string Nave::get_nome() {
    return nome;
}

int Nave::get_atk() {
    return atk;
}

int Nave::get_def() {
    return def;
}

int Nave::get_lvl() {
    return lvl;
}

int Nave::get_lf() {
    return lf;
}

int Nave::get_pt() {
    return pt;
}


