#include <iostream>
#include <string>
#include "ServicoTransporte.h"
#include "Person.h"
#include "camiao.h"
#include "Empresa.h"
#include "menus.h"
using namespace std;

int main() {
    string file = "../empresa.txt";
    Empresa e1(file);
    mainMenu(e1);
    //BST <Motorista> copia = e1.getMotoristas();
    //BSTItrIn<Motorista> it(copia);
    /*while (!it.isAtEnd()){
        cout << it.retrieve().getName();
        it.advance();
    }*/
    return 0;
}