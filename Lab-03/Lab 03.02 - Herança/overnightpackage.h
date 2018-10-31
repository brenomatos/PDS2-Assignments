#ifndef PACOTENOTURNO_H
#define PACOTENOTURNO_H

#include "package.h"
#include <string>

class OverNightPackage : public Package {
  private:
    double taxa_noturna;

  public:
    OverNightPackage(unsigned int peso, unsigned int custo, double taxa_noturna, string nome, string endereco);
    virtual double calculate_cost() override;
    virtual double get_custo_por_quilo() override;
};

#endif
