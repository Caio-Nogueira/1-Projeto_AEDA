#pragma once
#include <string>
#include <vector>
#include <list>
#include "ServicoTransporte.h"
#include "Utils.h"
using namespace std;

class Oficina{
private:
    string nome;
    list <string> marcas;
    unsigned disponibilidade;
    Date next_available_date;
public:
    Oficina(string nome, list<string> marcas, unsigned disponibilidade);

    string getNome() const;

    void setNome(const string nome);

    list <string> getMarcas() const ;

    void setMarcas(list <string > marcas);

    unsigned  getDisponibilidade() const;

    void setDisponibilidade(unsigned d);

    Date getDateAvailable() const;

    void setDateAvailable( const Date& d1);

    bool operator==(const Oficina& o1);

    bool operator<(const Oficina& o1) const;

    friend ostream& operator << (ostream& out, const Oficina& o);
};
