#include <string>
#include "circulo.h"
#include <cmath>
#define pi 3.14159265359
using namespace std;

Circulo::Circulo(string cor, int raio){
  this->cor = cor;
  this->raio = raio;
  this->nome = "circulo";
}

double  Circulo::get_area(){
  return pow(this->raio,2)*pi;
}

double  Circulo::get_perimetro(){
  return 2*pi*(this->raio);
}

string Circulo::get_cor(){
  return this->cor;
}


string Circulo::get_nome(){
  return this->nome;
}
