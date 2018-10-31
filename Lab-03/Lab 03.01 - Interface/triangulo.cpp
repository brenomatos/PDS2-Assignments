#include <string>
#include "triangulo.h"
#include "math.h"
using namespace std;

Triangulo::Triangulo(string cor, int aresta_1, int aresta_2, int aresta_3){
  this->cor = cor;
  this->aresta_1 = aresta_1;
  this->aresta_2 = aresta_2;
  this->aresta_3 = aresta_3;
  this->nome = "triangulo";
}

double Triangulo::get_area(){
	double p = this->aresta_1 + this->aresta_2 + this->aresta_3;
	double sp = p/2;
	double a = pow((sp*(sp-this->aresta_1)*(sp-this->aresta_2)*(sp-this->aresta_3)),(0.5));
	return a;
}

double Triangulo::get_perimetro(){
  return this->aresta_1+this->aresta_2+this->aresta_3;
}
string Triangulo::get_cor(){
  return this->cor;
}
string Triangulo::get_nome(){
  return this->nome;
}
