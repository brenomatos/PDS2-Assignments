#include "forma2d.h"
#include <cmath>
#include <string>
using namespace std;

class Triangulo: public Forma2D {
private:
  string cor;
  string nome;
  int aresta_1, aresta_2, aresta_3;
public:
  Triangulo (string cor, int aresta_1, int aresta_2, int aresta_3);
  double get_area();
  double get_perimetro();
  string get_cor();
  string get_nome();
};
