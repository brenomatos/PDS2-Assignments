#ifndef PACOTEDOISDIAS_H
#define PACOTEDOISDIAS_H

#include <string>
#include "package.h"
using namespace std;
class TwoDayPackage : public Package {
  private:
    double taxa_fixa;

  public:
    TwoDayPackage(unsigned int peso, unsigned int custo, double taxa_fixa, string nome, string endereco);
    virtual double calculate_cost() override;
    virtual double get_custo_por_quilo() override;
};

#endif
