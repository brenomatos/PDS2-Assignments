#include "twodaypackage.h"
#include "package.h"
#include <string>
using namespace std;
TwoDayPackage::TwoDayPackage(unsigned int peso, unsigned custo, double taxa_fixa, string nome, string endereco):
Package::Package(peso, custo, nome, endereco), taxa_fixa(taxa_fixa){}

double TwoDayPackage::calculate_cost(){
  return (this->peso * this->custo) + this->taxa_fixa;
}

double TwoDayPackage::get_custo_por_quilo(){
  return this->custo;
}
