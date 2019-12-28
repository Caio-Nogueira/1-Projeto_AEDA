#include "Oficina.h"
#include <iostream>
using namespace std;

Oficina::Oficina(string nome, list<string> marcas, unsigned disponibilidade) {
    Date atual = getCurrentTime();
    this->nome = nome;
    this->marcas = marcas;
    this-> disponibilidade = disponibilidade;
    this->next_available_date = atual.addDays(disponibilidade);
}

unsigned Oficina::getDisponibilidade() const {return disponibilidade;}

void Oficina::setDisponibilidade(unsigned d) {
    this->disponibilidade = disponibilidade;
    Date atual = getCurrentTime();
    atual.addDays(this->disponibilidade);
    this->next_available_date = atual;
}

string Oficina::getNome() const {return nome;}

list <string> Oficina::getMarcas() const {return marcas;}

void Oficina::setMarcas(list<string> marcas) {this->marcas = marcas;}

void Oficina::setNome(const string nome) {this->nome = nome;}

bool Oficina::operator==(const Oficina &o1) {return this->getNome() == o1.nome && this->disponibilidade == o1.disponibilidade;}

bool Oficina::operator<(const Oficina &o1) const {return this->disponibilidade > o1.disponibilidade;}

ostream& operator<<(ostream &out, const Oficina &o) {
    out << "Nome - " << o.nome << endl;
    out << "Especializada nas marcas: \n";
    for (string m: o.marcas)
        out << m << endl;
    out << "Disponivel em " << o.disponibilidade << " dias\n";
    out << "------------------------------------\n";
    return  out;
}

Date Oficina::getDateAvailable() const {return this->next_available_date;}

void Oficina::setDateAvailable(const Date &d1) {this->next_available_date = d1;}
