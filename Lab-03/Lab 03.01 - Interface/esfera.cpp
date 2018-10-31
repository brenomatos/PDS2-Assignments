#include <string>
#include <cmath>
#include "esfera.h"
#define pi 3.14159265359

using namespace std;

Esfera::Esfera(string cor, int raio){
  this->raio = raio;
  this->cor = cor;
  this->nome = "esfera";
}

string Esfera::get_cor(){
  return this->cor;
}
double Esfera::get_volume(){
  return (4.0/3.0)*pi*pow(raio,3);
}
string Esfera::get_nome(){
  return this->nome;
}
