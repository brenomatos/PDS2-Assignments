#include "overnightpackage.h"
#include "package.h"
#include <string>

using namespace std;

OverNightPackage::OverNightPackage(unsigned int peso, unsigned int custo, double taxa_noturna, string nome, string endereco):
Package::Package(peso, custo, nome,endereco), taxa_noturna(taxa_noturna){}


double OverNightPackage::calculate_cost(){
  return (this->peso * (this->custo+this->taxa_noturna));
}

double OverNightPackage::get_custo_por_quilo(){
  return this->custo;
}
