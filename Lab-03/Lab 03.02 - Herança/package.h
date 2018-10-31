#ifndef Package_H
#define Package_H

#include <iostream>
#include <string>

using namespace std;


class Package {
  protected:
    string nome;
    string endereco;
    unsigned int custo, peso;

  public:
    Package(unsigned int peso, unsigned int custo, string nome, string endereco);
    unsigned int get_peso();
    virtual double calculate_cost();
    virtual ~Package();
    virtual double get_custo_por_quilo();
};

#endif
