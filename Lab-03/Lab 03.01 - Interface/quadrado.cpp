#include "quadrado.h"
#include <string>
using namespace std;


Quadrado::Quadrado(string cor, int lado){
  this->nome = "quadrado";
  this->cor = cor;
  this->lado = lado;
}

double Quadrado::get_area(){
  return (this->lado)*(this->lado);
}

double Quadrado::get_perimetro(){
  return 4*(this->lado);
}

string Quadrado::get_cor(){
  return this->cor;
}

string Quadrado::get_nome(){
  return this->nome;
}
