#include "package.h"

Package::Package(unsigned int peso, unsigned int custo, string nome, string endereco){
  this->peso = peso;
  this->custo = custo;
  this->nome = nome;
  this->endereco = endereco;
}
Package::~Package(){}

unsigned int Package::get_peso(){
  return this->peso;
}

double Package::calculate_cost(){
  return this->peso * this->custo;
}

double Package::get_custo_por_quilo(){
  return this->custo;
}

