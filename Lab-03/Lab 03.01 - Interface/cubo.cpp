#include <string>
#include "cubo.h"
#include <cmath>
using namespace std;

Cubo::Cubo(string cor, int lado){
  this->cor = cor;
  this->lado = lado;
  this->nome = "cubo";
}
string Cubo::get_cor(){
  return this->cor;
}
string Cubo::get_nome(){
  return this->nome;
}
double Cubo::get_volume(){
  return pow(this->lado,3);
}
