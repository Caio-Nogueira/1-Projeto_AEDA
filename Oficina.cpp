//
// Created by caion on 27/12/2019.
//
#include "Oficina.h"
#include <iostream>
using namespace std;

Oficina::Oficina(string nome, list<string> marcas, unsigned disponibilidade) {
    this->nome = nome;
    this->marcas = marcas;
    this-> disponibilidade = disponibilidade;
}

unsigned Oficina::getDisponibilidade() const {return disponibilidade;}

void Oficina::setDisponibilidade(unsigned d) {this->disponibilidade = disponibilidade;}

string Oficina::getNome() const {return nome;}

list <string> Oficina::getMarcas() const {return marcas;}

void Oficina::setMarcas(list<string> marcas) {this->marcas = marcas;}

void Oficina::setNome(const string nome) {this->nome = nome;}

bool Oficina::operator==(const Oficina &o1) {
    return this->getNome() == o1.nome && this->disponibilidade == o1.disponibilidade;
}

bool Oficina::operator<(const Oficina &o1) const {
    return this->disponibilidade > o1.disponibilidade;
}

ostream& operator<<(ostream &out, const Oficina &o) {
    out << "Nome - " << o.nome << endl;
    out << "Especializada nas marcas: \n";
    for (string m: o.marcas)
        out << m << endl;
    out << "Disponivel em " << o.disponibilidade << " dias\n";
    out << "------------------------------------\n";
    return  out;
}